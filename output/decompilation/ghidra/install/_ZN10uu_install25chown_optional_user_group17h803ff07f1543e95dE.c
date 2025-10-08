undefined8
_ZN10uu_install25chown_optional_user_group17h803ff07f1543e95dE
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  undefined8 *local_130;
  code *local_128;
  long local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined **local_e0;
  undefined8 local_d8;
  undefined4 **ppuStack_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  
  iVar1 = *(int *)(param_3 + 0x50);
  iVar4 = *(int *)(param_3 + 0x58);
  if (iVar1 == 0 && iVar4 == 0) {
    iVar4 = (*(code *)PTR__ZN6uucore8features7process7geteuid17hd0ed7b4820ed9632E_00209c50)();
    if (iVar4 != 0) {
      return 0;
    }
    uVar2 = 0;
    iVar4 = 1;
    uVar3 = 0;
    iVar7 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x54);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    iVar7 = iVar1;
  }
  _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_e0,param_1,param_2);
  if ((int)local_e0 == 2) {
    local_118 = local_d8;
    local_120 = 10;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_120);
  }
  else {
    _ZN6uucore8features5perms10wrap_chown17h181c39f30a5ca939E
              (&local_120,param_1,param_2,local_a4,local_a0,iVar7,uVar2,iVar4,uVar3,iVar1 == 0);
    if (local_120 == 1) {
                    /* try { // try from 001686a1 to 001686b1 has its CatchHandler @ 001687b0 */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38
      )(&local_148,param_1,param_2);
      local_b0 = local_108;
      local_c0 = local_118;
      local_c8 = local_138;
      local_e0 = (undefined **)0x4;
                    /* try { // try from 001686ed to 001686f6 has its CatchHandler @ 001687ab */
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_e0);
    }
    else {
      if ((*(char *)(param_3 + 0x61) == '\x01') && (local_108 != 0)) {
        local_138 = local_108;
        local_148 = (undefined4)local_118;
        uStack_144 = local_118._4_4_;
        uStack_140 = uStack_110;
        uStack_13c = uStack_10c;
        local_130 = (undefined8 *)&local_148;
        local_128 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_e0 = &PTR_s_chown__00202478;
        local_d8 = 2;
        local_c0 = 0;
        ppuStack_d0 = (undefined4 **)&local_130;
        local_c8 = 1;
                    /* try { // try from 00168776 to 00168780 has its CatchHandler @ 001687a6 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_e0);
        puVar6 = (undefined8 *)&local_148;
      }
      else {
        puVar6 = &local_118;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3429258871469867E(puVar6);
      uVar5 = 0;
    }
  }
  return uVar5;
}