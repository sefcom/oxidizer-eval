long __rustcall
uu_tail::follow::files::PathData::new
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
                    /* try { // try from 00202db7 to 00202dc4 has its CatchHandler @ 00202e0a */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_38,param_5,param_6);
  *(undefined8 *)(param_1 + 0xc0) = local_28;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  (*(code *)PTR_memcpy_002c47b8)(param_1,param_4,0xb0);
  return param_1;
}