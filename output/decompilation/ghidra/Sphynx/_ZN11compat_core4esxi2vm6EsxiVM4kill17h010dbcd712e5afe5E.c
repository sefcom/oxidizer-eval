void _ZN11compat_core4esxi2vm6EsxiVM4kill17h010dbcd712e5afe5E
               (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long local_150;
  long local_148;
  long lStack_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long *local_120;
  code *local_118;
  undefined8 local_110;
  undefined *local_108;
  int local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_c8;
  undefined8 local_c0;
  
  local_150 = (*(code *)PTR___rust_alloc_004f43c0)(5,1);
  if (local_150 != 0) {
    local_148 = 5;
    lStack_140 = 0;
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17ha6434863460e3dbeE(&local_150,0,5);
    lVar3 = lStack_140;
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h5bd23e75d5fc6e32E
              (local_150 + lStack_140,5,&DAT_0029b324,5);
    lStack_140 = lVar3 + 5;
    local_118 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hdba53b93b23cbc0cE;
    local_108 = 
    PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17h3cf215fb85128eedE_004f3910
    ;
    local_e8 = &PTR_DAT_004e63a0;
    local_e0 = 2;
    local_d8 = 0;
    local_c8 = &local_120;
    local_c0 = 2;
    local_120 = &local_150;
    local_110 = param_2;
    (*(code *)PTR__ZN5alloc3fmt6format17h3807df668a4e013cE_004f48e0)(&local_138,&local_e8);
    if (local_148 != 0) {
      (*(code *)PTR___rust_dealloc_004f3b10)(local_150,local_148,1);
    }
    (*(code *)PTR__ZN3std3sys4unix7process14process_common7Command3new17h488fe90a515bc251E_004f4848)
              (&local_e8,"/bin/sh",7);
    uVar4 = (*(code *)PTR__ZN3std7process5Stdio4null17hcc4fcc7cfeff8ee8E_004f33c0)();
    (*(code *)
      PTR__ZN3std3sys4unix7process14process_common7Command6stdout17he63fdf42343b92c4E_004f4020)
              (&local_e8,uVar4);
    puVar2 = PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18;
    (*(code *)PTR__ZN3std3sys4unix7process14process_common7Command3arg17h767f7fe18acf49f1E_004f4b18)
              (&local_e8,"-c",2);
    (*(code *)puVar2)(&local_e8,local_138,local_128);
    (*(code *)PTR__ZN3std7process7Command6status17hf3a4699ef731b957E_004f3468)(local_100,&local_e8);
    _ZN4core3ptr13drop_in_place17hfd4d0c5a6abcb205E(&local_e8);
    if (local_100[0] == 1) {
      *param_1 = local_f8;
      param_1[1] = uStack_f0;
      if (local_130 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_138,local_130,1);
      }
    }
    else {
      if (local_130 != 0) {
        (*(code *)PTR___rust_dealloc_004f3b10)(local_138,local_130,1);
      }
      *(undefined *)param_1 = 3;
    }
    return;
  }
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_11allocate_in28__u7b__u7b_closure_u7d__u7d_17h9f289d254163e8c5E_llvm_3765406455587417959
            (5,1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}