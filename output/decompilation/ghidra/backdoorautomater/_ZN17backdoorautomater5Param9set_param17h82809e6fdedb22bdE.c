void _ZN17backdoorautomater5Param9set_param17h82809e6fdedb22bdE(undefined8 param_1,uint param_2)

{
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
                    /* try { // try from 00163ea1 to 00163eb4 has its CatchHandler @ 001656b2 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
            (&local_b8,&DAT_00267521,0x1f);
  local_38 = local_a8;
  local_48 = local_b8;
  uStack_44 = uStack_b4;
  uStack_40 = uStack_b0;
  uStack_3c = uStack_ac;
  local_50 = param_1;
                    /* WARNING: Could not emulate address calculation at 0x00163ee2 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_002674f4 + *(int *)(&DAT_002674f4 + (ulong)((param_2 & 0xff) - 1) * 4)))();
  return;
}