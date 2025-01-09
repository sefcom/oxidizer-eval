void __rustcall uu_df::table::Row::new(undefined8 *param_1)

{
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_20 = 0x8000000000000000;
                    /* try { // try from 001ca4c7 to 001ca4dc has its CatchHandler @ 001ca5d9 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_70,"total%",5);
  local_48 = local_60;
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
                    /* try { // try from 001ca4f1 to 001ca506 has its CatchHandler @ 001ca5ca */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_70,"-",1);
  local_28 = local_60;
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
                    /* try { // try from 001ca51b to 001ca530 has its CatchHandler @ 001ca5bb */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_70,"-",1);
  param_1[0x12] = local_60;
  param_1[0x10] = CONCAT44(uStack_6c,local_70);
  param_1[0x11] = CONCAT44(uStack_64,uStack_68);
  param_1[0x15] = local_10;
  param_1[0x13] = local_20;
  param_1[0x14] = uStack_18;
  param_1[0xc] = local_48;
  param_1[10] = CONCAT44(uStack_54,local_58);
  param_1[0xb] = CONCAT44(uStack_4c,uStack_50);
  param_1[0xd] = CONCAT44(uStack_34,local_38);
  param_1[0xe] = CONCAT44(uStack_2c,uStack_30);
  param_1[0xf] = local_28;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}