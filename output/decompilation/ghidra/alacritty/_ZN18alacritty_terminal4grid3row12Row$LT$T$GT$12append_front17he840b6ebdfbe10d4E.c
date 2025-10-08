void _ZN18alacritty_terminal4grid3row12Row_LT_T_GT_12append_front17he840b6ebdfbe10d4E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = param_1[3] + param_2[2];
                    /* try { // try from 0046d2fb to 0046d302 has its CatchHandler @ 0046d342 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3cb2cc92e418e783E
            (param_2,param_1[1],param_1[2]);
  param_1[2] = 0;
                    /* try { // try from 0046d30b to 0046d312 has its CatchHandler @ 0046d328 */
  _ZN4core3ptr80drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__term__cell__Cell_GT__GT_17h3a26ff64830026d7E
            (param_1);
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}