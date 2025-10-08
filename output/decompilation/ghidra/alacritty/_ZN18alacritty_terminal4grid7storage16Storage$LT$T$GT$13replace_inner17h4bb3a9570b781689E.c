void _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_13replace_inner17h4bb3a9570b781689E
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[5] = param_2[2];
                    /* try { // try from 0046ec42 to 0046ec46 has its CatchHandler @ 0046ec66 */
  _ZN4core3ptr122drop_in_place_LT_alloc__vec__Vec_LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__GT__GT_17h27df7d3e70b8b5deE
            ();
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[3] = 0;
  return;
}