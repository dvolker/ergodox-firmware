/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_Equal_Plus,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	KEY_Escape,	
	KEY_Backslash_Pipe,	KEY_q_Q,	KEY_w_W,	KEY_f_F,	KEY_p_P,	KEY_g_G,	1,	
	KEY_Tab,	KEY_a_A,	KEY_r_R,	KEY_s_S,	KEY_t_T,	KEY_d_D,	
	KEY_LeftShift,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	1,	
	KEY_LeftControl,	KEY_GraveAccent_Tilde,	KEY_Backslash_Pipe,	KEY_RightControl,	KEY_LeftGUI,	
	KEY_LeftControl,	KEY_Home,	
	0,	0,	KEY_End,	
	KEY_ReturnEnter,	KEY_DeleteBackspace,	KEY_LeftAlt,	
	// right hand
	2,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_Dash_Underscore,	
	KEY_LeftBracket_LeftBrace,	KEY_j_J,	KEY_l_L,	KEY_u_U,	KEY_y_Y,	KEY_Semicolon_Colon,	KEY_RightBracket_RightBrace,	
	KEY_h_H,	KEY_n_N,	KEY_e_E,	KEY_i_I,	KEY_o_O,	KEY_SingleQuote_DoubleQuote,	
	1,	KEY_k_K,	KEY_m_M,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,	
	KEY_LeftArrow,	KEY_DownArrow,	KEY_UpArrow,	KEY_RightArrow,	KEY_RightControl,	
	KEY_PageUp,	KEY_RightControl,	
	KEY_PageDown,	0,	0,	
	KEY_DeleteForward,	1,	KEY_Spacebar	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	KEY_F1,	KEY_F2,	KEY_F3,	KEY_F4,	KEY_F5,	KEY_F11,	
	0,	KEY_F6,	KEY_F7,	KEY_3_Pound,	KEY_4_Dollar,	KEY_F8,	1,	
	0,	KEY_F9,	KEY_F10,	KEY_F11,	KEY_Escape,	KEY_F16,	
	0,	KEY_F12,	KEY_F13,	KEY_F14,	KEY_F15,	KEY_F17,	1,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	KEY_F12,	KEY_F6,	KEY_F7,	KEY_F8,	KEY_F9,	KEY_F10,	0,	
	0,	KEY_1_Exclamation,	KEYPAD_EqualSign,	0x31,	KEY_7_Ampersand,	KEY_GraveAccent_Tilde,	0,	
	0x2F,	KEY_LeftBracket_LeftBrace,	KEYPAD_LeftParenthesis,	KEYPAD_RightParenthesis,	KEY_RightBracket_RightBrace,	0x30,	
	1,	0,	KEYPAD_Minus,	KEYPAD_Plus,	KEYPAD_Asterisk,	KEY_Backslash_Pipe,	0,	
	0,	0,	0,	0,	3,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	2,	0,	KEYPAD_NumLock_Clear,	KEYPAD_Slash,	KEYPAD_Asterisk,	KEYPAD_Minus,	0,	
	0,	0,	KEYPAD_7_Home,	KEYPAD_8_UpArrow,	KEYPAD_9_PageUp,	KEYPAD_Plus,	0,	
	0,	KEYPAD_4_LeftArrow,	KEYPAD_5,	KEYPAD_6_RightArrow,	KEYPAD_Plus,	0,	
	0,	0,	KEYPAD_1_End,	KEYPAD_2_DownArrow,	KEYPAD_3_PageDown,	KEY_ReturnEnter,	0,	
	0,	0,	KEYPAD_Period_Delete,	KEY_ReturnEnter,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	KEYPAD_0_Insert	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_Equal_Plus,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	0,	
	0,	KEY_q_Q,	KEY_w_W,	KEY_e_E,	KEY_r_R,	KEY_t_T,	0,	
	0,	KEY_a_A,	KEY_s_S,	KEY_d_D,	KEY_f_F,	KEY_g_G,	
	0,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	2,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	0,	
	0,	KEY_y_Y,	KEY_u_U,	KEY_i_I,	KEY_o_O,	KEY_p_P,	0,	
	KEY_h_H,	KEY_j_J,	KEY_k_K,	KEY_l_L,	KEY_Semicolon_Colon,	0,	
	0,	KEY_n_N,	KEY_m_M,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Slash_Question,	0,	
	KEY_LeftArrow,	KEY_DownArrow,	KEY_UpArrow,	KEY_RightArrow,	3,	
	0,	0,	
	0,	0,	0,	
	0,	0,	KEY_Spacebar	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	lpush1,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	sshprre,	sshprre,	kprrel,	lpop1,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush1,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	sshprre,	kprrel,	sshprre,	sshprre,	kprrel,	ktrans,	
	sshprre,	kprrel,	sshprre,	sshprre,	kprrel,	sshprre,	
	lpush1,	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	lpush3,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	dbtldr,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	lpop2,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	NULL,	NULL,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	lpop3,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop1,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	lpop1,	kprrel	
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	sshprre,	sshprre,	kprrel,	NULL,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop1,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	sshprre,	kprrel,	sshprre,	sshprre,	kprrel,	ktrans,	
	sshprre,	kprrel,	sshprre,	sshprre,	kprrel,	sshprre,	
	lpop1,	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	NULL,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	NULL,	ktrans,	
	ktrans,	NULL,	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	NULL,	NULL,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	ktrans,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	lpop2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	ktrans,	
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	ktrans,	ktrans,	
	ktrans,	NULL,	NULL,	
	ktrans,	ktrans,	kprrel	
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------
