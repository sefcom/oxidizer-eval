void _ZN9meilitool4main17hef512f1b76db266eE(void)

{
  byte local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_60;
  
  _ZN12clap_builder6derive6Parser5parse17h51276cd44191ff78E(&local_78);
  local_98 = local_68;
  local_a8 = local_78;
  uStack_a0 = uStack_70;
                    /* try { // try from 0045ac31 to 0045accd has its CatchHandler @ 0045aedd */
  (*(code *)PTR__ZN17meilisearch_types10versioning11get_version17hf811dd3feae8c91dE_0063cf48)
            (&local_78,uStack_70);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_7context17h03b3312a6256f16cE
            (local_b8,&local_78,"While checking the version file",0x1f);
  if ((local_b8[0] & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045ac87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0024b770 + *(int *)(&DAT_0024b770 + (ulong)local_60 * 4)))();
    return;
  }
  local_84 = local_b4;
  local_80 = local_b0;
                    /* WARNING: Could not recover jumptable at 0x0045acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0024b744 + *(int *)(&DAT_0024b744 + (ulong)local_60 * 4)))();
  return;
}