void _ZN8forc_fmt4main17hccb60a64fe2a3c18E(void)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
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
  (*(code *)PTR__ZN12forc_tracing23init_tracing_subscriber17h0a725aa6998cc63fE_0096b400)(&local_68);
  local_70 = _ZN8forc_fmt3run17h26db7dfbf2d65178E();
  local_38 = local_70;
  if (local_70 == 0) {
    _ZN4core3ptr73drop_in_place_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT_17h2b0aae2214a03b3fE
              (&local_38);
    return;
  }
                    /* try { // try from 004d2c38 to 004d2ca1 has its CatchHandler @ 004d2ce7 */
  (*(code *)PTR__ZN12forc_tracing13println_error17h8bc2a86d36dc4dbaE_0096b408)
            ("Formatting skipped due to error.",0x20);
  local_30 = &local_70;
  local_28 = 
  PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h15a36b3793b796daE_0096b280
  ;
  local_68 = &DAT_00266a30;
  uStack_60 = 1;
  local_48 = 0;
  local_58 = &local_30;
  local_50 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
            (local_20,0,extraout_RDX,&local_68);
  uStack_60 = CONCAT44(uStack_14,uStack_18);
  local_58 = (undefined8 **)local_10;
                    /* try { // try from 004d2cbb to 004d2cc0 has its CatchHandler @ 004d2cd8 */
  (*(code *)PTR__ZN12forc_tracing13println_error17h8bc2a86d36dc4dbaE_0096b408)(uStack_60);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(&local_68);
                    /* try { // try from 004d2ccb to 004d2cd5 has its CatchHandler @ 004d2ce7 */
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_0096b140)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}