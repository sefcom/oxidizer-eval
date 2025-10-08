void _ZN9alacritty3ipc10socket_dir17h1c4e47f5863be2c9E(int *param_1)

{
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  int local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined local_e8 [216];
  
  _ZN3xdg16base_directories15BaseDirectories8with_env17h17a1f3f28c4a7b5dE(local_e8);
                    /* try { // try from 0055c5cd to 0055c6ab has its CatchHandler @ 0055c6c4 */
  (*(code *)
    PTR__ZN3xdg16base_directories15BaseDirectories21get_runtime_directory17h961b62173248f5baE_009dff40
  )(&local_128,local_e8);
  if ((int)local_128 == 4) {
    _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
              (&local_100,*(undefined8 *)(uStack_120 + 8),*(undefined8 *)(uStack_120 + 0x10));
    uStack_150 = local_f0;
    iStack_160 = local_100;
    iStack_15c = iStack_fc;
    uStack_158 = uStack_f8;
    uStack_154 = uStack_f4;
LAB_0055c632:
    local_128 = CONCAT44(iStack_15c,iStack_160);
    local_138 = CONCAT44(uStack_154,uStack_158);
    local_130 = uStack_150;
    local_118 = uStack_150;
    uStack_120 = local_138;
    _ZN9alacritty3ipc10socket_dir28__u7b__u7b_closure_u7d__u7d_17hd26803c74fc99a5aE
              (&local_168,&local_128);
    if (CONCAT44(iStack_164,local_168) != -0x8000000000000000) {
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_154,uStack_158);
      *param_1 = local_168;
      param_1[1] = iStack_164;
      param_1[2] = iStack_160;
      param_1[3] = iStack_15c;
      goto LAB_0055c6ac;
    }
  }
  else {
    local_168 = (int)local_128;
    iStack_164 = local_128._4_4_;
    iStack_160 = (int)uStack_120;
    iStack_15c = uStack_120._4_4_;
    local_148 = local_108;
    uStack_158 = (undefined4)local_118;
    uStack_154 = local_118._4_4_;
    uStack_150 = CONCAT44(uStack_10c,uStack_110);
    if ((int)local_128 == 4) goto LAB_0055c632;
    _ZN4core3ptr98drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_xdg__base_directories__Error_GT__GT_17h1f931bfc54163f64E
              (&local_168);
  }
  (*(code *)PTR__ZN3std3env8temp_dir17h4c6b7a08795666f1E_009dff48)(param_1);
LAB_0055c6ac:
  _ZN4core3ptr59drop_in_place_LT_xdg__base_directories__BaseDirectories_GT_17hfbd973180228c1c0E
            (local_e8);
  return;
}