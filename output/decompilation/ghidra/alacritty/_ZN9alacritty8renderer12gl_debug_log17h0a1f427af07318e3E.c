void _ZN9alacritty8renderer12gl_debug_log17h0a1f427af07318e3E(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_R9;
  undefined *local_90;
  code *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [24];
  undefined **local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = (*(code *)PTR_strlen_009df220)(in_R9);
                    /* try { // try from 0056d7da to 0056d7ea has its CatchHandler @ 0056d8a3 */
  (*(code *)
    PTR__ZN5alloc3ffi5c_str40__LT_impl_u20_core__ffi__c_str__CStr_GT_15to_string_lossy17h9afbfb8b28205f24E_009df228
  )(local_58,in_R9,lVar1 + 1);
                    /* try { // try from 0056d7eb to 0056d88d has its CatchHandler @ 0056d8a9 */
  uVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (3 < uVar2) {
    local_88 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hcfd5d0c223f1891dE;
    local_40 = &PTR_s__gl_render__00984170;
    local_38 = 1;
    local_20 = 0;
    local_30 = &local_90;
    local_28 = 1;
    local_90 = local_58;
    local_60 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                         (&PTR_s_alacritty_src_renderer_mod_rs_00984180);
    local_80 = "alacritty::renderer3.3";
    local_78 = 0x13;
    local_70 = "alacritty::renderer3.3";
    local_68 = 0x13;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_40,4,&local_80);
  }
  _ZN4core3ptr37drop_in_place_LT_crossfont__Style_GT_17h2b47363f07595d0eE(local_58);
  return;
}