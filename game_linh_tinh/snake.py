import pygame 
#import time 
import random
import sys 
from pygame.math import Vector2 

pygame.init()

class PREY:
    def __init__(self):
        self.randomize()

    def draw_prey(self):
        prey_rect = pygame.Rect(int(self.pos.x * cell_size), int(self.pos.y * cell_size), cell_size, cell_size)
        pygame.draw.rect(screen, (223, 110, 49), prey_rect) 

    def randomize(self):
        self.x = random.randint(0, cell_number - 1)
        self.y = random.randint(0, cell_number - 1)
        self.pos = Vector2 (self.x, self.y)

class SNAKE:
    def __init__(self):
        self.body = [Vector2(5, 10), Vector2(4, 10), Vector2(3, 10)]
        self.direction = Vector2(0, 0)
        self.new_block = False

    def draw_snake(self):
        for block in self.body:
            x_pos = int(block.x * cell_size)
            y_pos = int(block.y * cell_size)
            block_rect = pygame.Rect(x_pos, y_pos, cell_size, cell_size)
            pygame.draw.rect(screen, (183, 111, 122), block_rect)
    
    def move_snake(self):
        if self.new_block == True:
            body_copy = self.body[:]
            body_copy.insert(0, body_copy[0] + self.direction) 
            self.body = body_copy[:]
            self.new_block = False
        else:
            body_copy = self.body[:-1]
            body_copy.insert(0, body_copy[0] + self.direction) 
            self.body = body_copy[:]

    def add_block(self):
        self.new_block = True

    def reset(self):
        self.body = [Vector2(5, 10), Vector2(4, 10), Vector2(3, 10)]
        self.direction = Vector2(0, 0)

class MAIN:
    def __init__(self):
        self.snake = SNAKE()
        self.prey = PREY()

    def update(self):
        self.snake.move_snake()
        self.check_collect()
        self.check_die()

    def draw_elements(self):
        self.prey.draw_prey()
        self.snake.draw_snake()
        self.draw_score()

    def check_collect(self):
        if self.prey.pos == self.snake.body[0]:
            self.prey.randomize()
            self.snake.add_block()

        for block in self.snake.body[1:]:
            if block == self.prey.pos:
                self.prey.randomize()

    def check_die(self):
        if not 0 <= self.snake.body[0].x < cell_number or not 0 <= self.snake.body[0].y < cell_number:
            self.game_over()

        for block in self.snake.body[1:]:
            if block == self.snake.body[0]:
                self.game_over()
    
    def game_over(self):
        self.snake.reset()

    def draw_score(self):
        score_text = str(len(self.snake.body) - 3)
        score_surface = game_font.render(score_text, True, (60, 80, 20))
        
        score_x = int(cell_size * cell_number - 30)
        score_y = int(cell_number * cell_size - 15)
        
        score_rect = score_surface.get_rect(center = (score_x, score_y))
        
        screen.blit(score_surface, score_rect)

cell_size = 15  
cell_number = 20

screen = pygame.display.set_mode((cell_size * cell_number, cell_number * cell_size))
pygame.display.set_caption('Snake')
 
clock = pygame.time.Clock()

game_font = pygame.font.Font(None, 30)

SCREEN_UPDATE = pygame.USEREVENT
pygame.time.set_timer(SCREEN_UPDATE, 100)

main_game = MAIN()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        if event.type == SCREEN_UPDATE:
            main_game.update()

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP:
                if main_game.snake.direction.y != 1:
                    main_game.snake.direction = Vector2(0, -1)
            if event.key == pygame.K_DOWN:
                if main_game.snake.direction.y != -1:
                    main_game.snake.direction = Vector2(0, 1)
            if event.key == pygame.K_RIGHT:
                if main_game.snake.direction.x != -1:
                    main_game.snake.direction = Vector2(1, 0)
            if event.key == pygame.K_LEFT:
                if main_game.snake.direction.x != 1:
                    main_game.snake.direction = Vector2(-1, 0)

    screen.fill ((175, 215, 70))
    main_game.draw_elements()
    pygame.display.update()
    clock.tick(60) 


#print('Just_Monika')