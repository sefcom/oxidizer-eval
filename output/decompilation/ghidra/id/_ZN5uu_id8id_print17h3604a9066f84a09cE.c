void _ZN5uu_id8id_print17h3604a9066f84a09cE(byte *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_1d8;
  undefined8 uStack_1d0;
  int **local_1c8;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  int **local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int *local_170;
  undefined *local_168;
  undefined *local_160;
  code *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  code *local_138;
  undefined local_130 [128];
  long local_b0;
  undefined8 local_a8;
  
  if ((*param_1 & 1) != 0) {
    local_184 = *(int *)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    local_17c = *(int *)(param_1 + 0x10);
    local_180 = iVar1;
    local_178 = iVar2;
    local_174 = local_17c;
    local_150 = param_2;
    (*(code *)
      PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001ef8c8
    )(local_130);
    local_148 = param_3;
    _ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h5379acb158e2a810E
              (&local_1b8,local_130);
    if (local_1b8 == (undefined **)0x8000000000000000) {
      _ZN5uu_id8id_print28__u7b__u7b_closure_u7d__u7d_17h61bc1788f512f6c7E
                (&local_1d8,&local_184,uStack_1b0);
    }
    else {
      local_1d8 = local_1b8;
      uStack_1d0 = uStack_1b0;
      local_1c8 = local_1a8;
    }
    local_170 = &local_184;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
    ;
    local_158 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_1b8 = &PTR_DAT_001e8ec8;
    uStack_1b0 = 3;
    local_198 = 0;
    local_1a0 = 2;
                    /* try { // try from 0015df59 to 0015df63 has its CatchHandler @ 0015e2d0 */
    local_1a8 = &local_170;
    local_160 = (undefined *)&local_1d8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_1b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
              (local_1d8,uStack_1d0);
    (*(code *)
      PTR__ZN97__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17hf537d3ad4e514fa6E_001ef8b0
    )(&local_1b8,iVar1);
    if (local_1b8 == (undefined **)0x8000000000000000) {
      _ZN5uu_id8id_print28__u7b__u7b_closure_u7d__u7d_17h158cc5b81899bf3cE(&local_1d8,&local_180);
    }
    else {
      local_1d8 = local_1b8;
      uStack_1d0 = uStack_1b0;
      local_1c8 = local_1a8;
    }
    local_170 = &local_180;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
    ;
    local_158 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_1b8 = &PTR_s_gid__001e8ef8;
    uStack_1b0 = 3;
    local_198 = 0;
    local_1a0 = 2;
                    /* try { // try from 0015e00a to 0015e014 has its CatchHandler @ 0015e2ce */
    local_1a8 = &local_170;
    local_160 = (undefined *)&local_1d8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_1b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
              (local_1d8,uStack_1d0);
    if (param_1[0x1c] == 0) {
      if (iVar2 != local_184) {
        (*(code *)
          PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_001ef8c8
        )(&local_b0,iVar2);
        if ((local_b0 == -0x8000000000000000) ||
           (_ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17h5379acb158e2a810E
                      (&local_1b8,&local_b0), local_a8 = uStack_1b0,
           local_1b8 == (undefined **)0x8000000000000000)) {
          _ZN5uu_id8id_print28__u7b__u7b_closure_u7d__u7d_17h61bc1788f512f6c7E
                    (&local_1d8,&local_178,local_a8);
        }
        else {
          local_1d8 = local_1b8;
          uStack_1d0 = uStack_1b0;
          local_1c8 = local_1a8;
        }
        local_170 = &local_178;
        local_168 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
        ;
        local_158 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1b8 = &PTR_s_euid__001e8f28;
        uStack_1b0 = 3;
        local_198 = 0;
        local_1a0 = 2;
                    /* try { // try from 0015e0f1 to 0015e0fb has its CatchHandler @ 0015e294 */
        local_1a8 = &local_170;
        local_160 = (undefined *)&local_1d8;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_1b8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
                  (local_1d8,uStack_1d0);
      }
      if (local_17c != local_180) {
        (*(code *)
          PTR__ZN97__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17hf537d3ad4e514fa6E_001ef8b0
        )(&local_1b8,local_17c);
        if (local_1b8 == (undefined **)0x8000000000000000) {
          _ZN5uu_id8id_print28__u7b__u7b_closure_u7d__u7d_17h158cc5b81899bf3cE
                    (&local_1d8,&local_174);
        }
        else {
          local_1d8 = local_1b8;
          uStack_1d0 = uStack_1b0;
          local_1c8 = local_1a8;
        }
        local_170 = &local_174;
        local_168 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001ef908
        ;
        local_158 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1b8 = &PTR_s_egid__001e8f58;
        uStack_1b0 = 3;
        local_198 = 0;
        local_1a0 = 2;
                    /* try { // try from 0015e1a7 to 0015e1b1 has its CatchHandler @ 0015e292 */
        local_1a8 = &local_170;
        local_160 = (undefined *)&local_1d8;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_1b8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
                  (local_1d8,uStack_1d0);
      }
    }
    _ZN4core4iter6traits8iterator8Iterator7collect17h9bfe5c5b303d5699E
              (&local_170,local_150,local_150 + local_148 * 4);
                    /* try { // try from 0015e1e8 to 0015e1f8 has its CatchHandler @ 0015e2b9 */
    _ZN5alloc3str17join_generic_copy17h59511d2ef6868464E
              (&local_1b8,local_168,local_160,
               ",: cannot find name for user ID cannot find name for group ID ");
    local_1c8 = local_1a8;
    local_1d8 = local_1b8;
    uStack_1d0 = uStack_1b0;
    local_138 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_1b8 = &PTR_s_groups__001e8f88;
    uStack_1b0 = 1;
    local_198 = 0;
    local_1a8 = (int **)&local_140;
    local_1a0 = 1;
                    /* try { // try from 0015e250 to 0015e25a has its CatchHandler @ 0015e296 */
    local_140 = (undefined *)&local_1d8;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_1b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
              (local_1d8,uStack_1d0);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd40cc4d4fa480ff0E
              (&local_170);
    return;
  }
  uVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ef900)
                    (&PTR_s_src_uu_id_src_id_rs____001e8f98);
                    /* catch() { ... } // from try @ 0015e1a7 with catch @ 0015e292 */
                    /* catch() { ... } // from try @ 0015df59 with catch @ 0015e2d0 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E(local_1d8,uStack_1d0)
  ;
  _Unwind_Resume(uVar3);
  return;
}