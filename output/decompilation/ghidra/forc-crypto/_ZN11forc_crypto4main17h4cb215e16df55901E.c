void _ZN11forc_crypto4main17h4cb215e16df55901E(void)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  long local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  long *local_30;
  undefined *local_28;
  undefined local_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  uVar3 = local_48;
  uVar2 = (ushort)local_48;
  local_48._4_4_ = SUB84(uVar3,4);
  local_48._0_4_ = CONCAT22(0x402,uVar2 & 0xff00);
  local_68 = (undefined *)0x6;
  uStack_60 = 0x8000000000000000;
  (*(code *)PTR__ZN12forc_tracing23init_tracing_subscriber17h0a725aa6998cc63fE_007865f8)(&local_68);
  local_70 = _ZN11forc_crypto3run17h9233c73a0bfd917dE();
  local_38 = local_70;
  if (local_70 == 0) {
    _ZN4core3ptr73drop_in_place_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT_17h966a044c23b2646dE
              (&local_38);
    return;
  }
  local_30 = &local_70;
  local_28 = 
  PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h15a36b3793b796daE_00786600
  ;
  local_68 = &DAT_0017ab60;
  uStack_60 = 1;
  local_48 = 0;
  local_58 = &local_30;
  local_50 = 1;
                    /* try { // try from 004cddef to 004cddfd has its CatchHandler @ 004cde43 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hf0943f2d701b1660E(local_20,&local_68);
  uStack_60 = CONCAT44(uStack_14,uStack_18);
  local_58 = (undefined8 **)local_10;
                    /* try { // try from 004cde17 to 004cde1c has its CatchHandler @ 004cde34 */
  (*(code *)PTR__ZN12forc_tracing13println_error17h8bc2a86d36dc4dbaE_00786608)(uStack_60);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(&local_68);
                    /* try { // try from 004cde27 to 004cde31 has its CatchHandler @ 004cde43 */
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_007863b0)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}