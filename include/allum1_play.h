/*
** allum1_play.h for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Feb  6 16:49:05 2016 Ronan Boiteau
** Last update Wed Feb 17 17:38:52 2016 Ronan Boiteau
*/

#ifndef ALLUM1_PLAY_H_
# define ALLUM1_PLAY_H_

int		_ai_dumb(t_line *board);
int		_ai_easy(t_line *board);
int		_ai_hard(t_line *board);
int		_ai_insane(t_line *board);
int		_ai_medium(t_line *board);
int		_computer_turn(t_line *board, char mode);
int		_player_turn(t_line *board, char mode);

#endif /* !ALLUM1_PLAY_H_ */
