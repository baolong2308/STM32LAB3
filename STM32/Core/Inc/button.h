/*
 * button.h
 *
 *  Created on: Oct 21, 2024
 *      Author: admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

extern int button1_flag;

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET
void getKeyInput();
void subKeyProcess();

#endif /* INC_BUTTON_H_ */