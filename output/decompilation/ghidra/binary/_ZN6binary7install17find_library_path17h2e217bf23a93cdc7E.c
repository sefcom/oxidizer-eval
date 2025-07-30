void _ZN6binary7install17find_library_path17h2e217bf23a93cdc7E(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined4 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *local_70;
  undefined *local_68;
  int local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  long local_48 [5];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar3) {
    local_b8 = &PTR_DAT_019e6df0;
    local_b0 = 1;
    local_a8 = (undefined4 **)0x8;
    local_a0 = 0;
    uStack_98 = 0;
    local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6e20);
    local_e0 = &DAT_0015023f;
    local_d8 = 0xf;
    local_d0 = &DAT_0015023f;
    local_c8 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,3,&local_e0);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  iVar2 = (*(code *)PTR_dladdr_01a27ae0)(PTR_strerror_01a27ad8,local_48);
  lVar1 = local_48[0];
  if (local_48[0] != 0 && iVar2 != 0) {
    lVar4 = (*(code *)PTR_strlen_01a27ae8)(local_48[0]);
    (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17hfff95a411164d6f7E_01a27af0)
              (local_60,lVar1,lVar4 + 1);
    if (local_60[0] != 1) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he316f2bb80969970E
                (&local_88,local_58,local_50);
                    /* try { // try from 018d0aab to 018d0b65 has its CatchHandler @ 018d0b82 */
      (*(code *)PTR__ZN3std4path7PathBuf3pop17h1b25675dc618eb21E_01a27af8)(&local_88);
      uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (2 < uVar3) {
        local_20 = uStack_80;
        uStack_1c = uStack_7c;
        uStack_18 = uStack_78;
        uStack_14 = uStack_74;
        local_70 = &local_20;
        local_68 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
        ;
        local_b8 = &PTR_DAT_019e6e00;
        local_b0 = 1;
        uStack_98 = 0;
        local_a8 = &local_70;
        local_a0 = 1;
        local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6e38);
        local_e0 = &DAT_0015023f;
        local_d8 = 0xf;
        local_d0 = &DAT_0015023f;
        local_c8 = 0xf;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,3,&local_e0);
      }
      param_1[2] = CONCAT44(uStack_74,uStack_78);
      *param_1 = local_88;
      param_1[1] = CONCAT44(uStack_7c,uStack_80);
      return;
    }
  }
  uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (1 < uVar3) {
    local_b8 = &PTR_DAT_019e6e10;
    local_b0 = 1;
    local_a8 = (undefined4 **)0x8;
    local_a0 = 0;
    uStack_98 = 0;
    local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6e50);
    local_e0 = &DAT_0015023f;
    local_d8 = 0xf;
    local_d0 = &DAT_0015023f;
    local_c8 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_b8,2,&local_e0);
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he316f2bb80969970E
            (param_1,"/libweekQ",4);
  return;
}