void _ZN6uu_fmt9parasplit9ParaWords3new17h604c573007ec43f4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_30 = 0;
  uStack_28 = 8;
  local_20 = 0;
                    /* try { // try from 001635bd to 001635c6 has its CatchHandler @ 001635e7 */
  uStack_18 = param_2;
  local_10 = param_3;
  _ZN6uu_fmt9parasplit9ParaWords12create_words17hee19cec8b657e83aE(&local_30);
  param_1[4] = local_10;
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  return;
}