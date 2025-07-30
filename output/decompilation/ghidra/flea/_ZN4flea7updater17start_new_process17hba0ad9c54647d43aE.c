void _ZN4flea7updater17start_new_process17hba0ad9c54647d43aE(long param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 **local_120;
  code *local_118;
  undefined4 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
                    /* try { // try from 00386115 to 00386122 has its CatchHandler @ 003862b2 */
  (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17hc28911b40fe28e29E_008269d0)
            (&local_e8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  local_178 = local_d8;
  local_188 = local_e8;
  uStack_180 = uStack_e0;
  local_d8 = (undefined4 ***)param_2[2];
  local_e8 = (undefined **)*param_2;
  uStack_e0._0_4_ = *(undefined4 *)(param_2 + 1);
  uStack_e0._4_4_ = *(undefined4 *)((long)param_2 + 0xc);
                    /* try { // try from 00386154 to 0038620b has its CatchHandler @ 003862e0 */
  _ZN3std4path7PathBuf4push17h91d5a0b7cd5e4ff3E(&local_188,&local_e8);
  (*(code *)
    PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
  )(&local_e8,uStack_180,local_178);
  if (((ulong)local_e8 & 1) == 0) {
    local_148 = (undefined4)uStack_e0;
    uStack_144 = uStack_e0._4_4_;
    uStack_140 = (undefined4)local_d8;
    uStack_13c = local_d8._4_4_;
    local_168 = &local_148;
    local_120 = &local_168;
    local_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf53647e53640ab07E;
    local_e8 = &PTR_s_Starting_a_new_process__path___007f6280;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_120;
    local_d0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hbd37af77d9713dc6E(&local_100,&local_e8);
    local_168 = local_100;
    uStack_160 = uStack_f8;
    local_158 = local_f0;
    local_138 = local_178;
    local_148 = (undefined4)local_188;
    uStack_144 = local_188._4_4_;
    uStack_140 = (undefined4)uStack_180;
    uStack_13c = uStack_180._4_4_;
                    /* try { // try from 00386239 to 0038624a has its CatchHandler @ 003862bf */
    _ZN3std7process7Command3new17hf167ede55a98d21cE(&local_e8,&local_148);
                    /* try { // try from 0038624b to 00386276 has its CatchHandler @ 003862c4 */
    (*(code *)PTR__ZN3std7process7Command5spawn17h7ffa78d1da680294E_008269d8)(&local_148,&local_e8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hfff00bbc41838fb2E
              (&local_120,&local_148,uStack_160,local_158);
    _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h2df2be718315ad29E(&local_120);
                    /* try { // try from 00386281 to 0038628d has its CatchHandler @ 003862bf */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hca8942e3d0a00569E(&local_e8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8c3e4c9e242e21edE(&local_168);
    return;
  }
                    /* try { // try from 003862a3 to 003862af has its CatchHandler @ 003862e0 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
            (&PTR_s_src_updater_rs_007f62b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}