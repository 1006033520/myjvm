/**
 * +-----------------------------------------------------------------+
 * |  myjvm writing a Java virtual machine step by step (C version)  |
 * +-----------------------------------------------------------------+
 * |  Author: springlchy <sisbeau@126.com>  All Rights Reserved      |
 * +-----------------------------------------------------------------+
 */

#include "opcode_actions/op_const.c"
#include "opcode_actions/op_load.c"
#include "opcode_actions/op_store.c"
#include "opcode_actions/op_stack.c"
#include "opcode_actions/op_math.c"
#include "opcode_actions/op_cast.c"
#include "opcode_actions/op_compare.c"
#include "opcode_actions/op_jump.c"
#include "opcode_actions/op_control.c"
#include "opcode_actions/op_obj.c"
#include "opcode_actions/op_extend.c"
