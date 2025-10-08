void _ZN2fd3fmt14FormatTemplate8generate17he820548229a842f6E(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  undefined auVar5 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined local_48 [24];
  
  auVar5 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h03cecf9d3b6fc05eE
                     (1,0);
  uVar2 = auVar5._8_8_;
  local_70 = auVar5._0_8_;
  if (*param_2 == 1) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
              (param_1,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
    return;
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  local_50 = param_1;
  if (*(long *)(param_2 + 6) != 0) {
    puVar4 = *(ulong **)(param_2 + 4);
    lVar3 = *(long *)(param_2 + 6) * 0x18;
    do {
      switch(*puVar4 ^ 0x8000000000000000) {
      case 0:
                    /* try { // try from 002f5e72 to 002f5eaa has its CatchHandler @ 002f5fd6 */
        _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
                  (&local_88,local_70,uVar2,0);
        _ZN3std3ffi6os_str8OsString4push17h5df44f642c3867c3E(&local_68,&local_88);
        break;
      case 1:
                    /* try { // try from 002f5f55 to 002f5f8d has its CatchHandler @ 002f5fd6 */
        auVar5 = _ZN2fd3fmt5input8basename17ha1dafb3b189e8a1eE(local_70,uVar2);
        _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
                  (&local_88,auVar5._0_8_,auVar5._8_8_,0);
        _ZN3std3ffi6os_str8OsString4push17h5df44f642c3867c3E(&local_68,&local_88);
        break;
      case 2:
                    /* try { // try from 002f5ed9 to 002f5ee8 has its CatchHandler @ 002f5fd6 */
        _ZN2fd3fmt5input7dirname17h900660a28c19a669E(&local_88,local_70,uVar2);
        uVar1 = local_80;
                    /* try { // try from 002f5ef3 to 002f5f11 has its CatchHandler @ 002f5fc3 */
        _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
                  (local_48,local_80,local_78,0);
        _ZN3std3ffi6os_str8OsString4push17h5df44f642c3867c3E(&local_68,local_48);
        goto LAB_002f5e30;
      case 3:
                    /* try { // try from 002f5f17 to 002f5f26 has its CatchHandler @ 002f5fd6 */
        _ZN2fd3fmt5input16remove_extension17hfdc34e319ac0822aE(&local_88,local_70,uVar2);
        uVar1 = local_80;
                    /* try { // try from 002f5f31 to 002f5f4f has its CatchHandler @ 002f5fc5 */
        _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
                  (local_48,local_80,local_78,0);
        _ZN3std3ffi6os_str8OsString4push17h5df44f642c3867c3E(&local_68,local_48);
        goto LAB_002f5e30;
      case 4:
        uVar1 = _ZN2fd3fmt5input8basename17ha1dafb3b189e8a1eE(local_70,uVar2);
        _ZN2fd3fmt5input16remove_extension17hfdc34e319ac0822aE(&local_88,uVar1);
        uVar1 = local_80;
                    /* try { // try from 002f5eb5 to 002f5ed3 has its CatchHandler @ 002f5fc1 */
        _ZN2fd3fmt14FormatTemplate17replace_separator17ha44a6270c1ec8ca3E
                  (local_48,local_80,local_78,0);
        _ZN3std3ffi6os_str8OsString4push17h5df44f642c3867c3E(&local_68,local_48);
LAB_002f5e30:
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h7308b79749514aeeE
                  (local_88,uVar1);
        break;
      default:
        _ZN3std3ffi6os_str8OsString4push17h30095eacd8312ed3E(&local_68,puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  local_50[2] = local_58;
  *local_50 = local_68;
  local_50[1] = local_60;
  return;
}