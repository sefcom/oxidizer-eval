void __rustcall
uu_split::platform::unix::WithEnvVarSet::new
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  std::env::var(&local_58,&DAT_001179bc,4);
                    /* try { // try from 001d5b3b to 001d5b63 has its CatchHandler @ 001d5b92 */
  std::env::set_var(&DAT_001179bc,4,param_2,param_3);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_38,&DAT_001179bc,4);
  param_1[6] = local_28;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return;
}