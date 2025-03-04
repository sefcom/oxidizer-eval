long * _ZN11compat_core4esxi5utils17target_extensions17hfec7f96988750855E(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long local_30;
  long *local_28;
  long local_20;
  
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_004f43c0)(0xc0,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = "log";
    puVar2[1] = 3;
    puVar2[2] = "vmdk";
    puVar2[3] = 4;
    puVar2[4] = "vmem";
    puVar2[5] = 4;
    puVar2[6] = "vswp";
    puVar2[7] = 4;
    puVar2[8] = "vmsn";
    puVar2[9] = 4;
    puVar2[10] = "vmsd";
    puVar2[0xb] = 4;
    puVar2[0xc] = "iso";
    puVar2[0xd] = 3;
    puVar2[0xe] = "zip";
    puVar2[0xf] = 3;
    puVar2[0x10] = "txt";
    puVar2[0x11] = 3;
    puVar2[0x12] = "vmx";
    puVar2[0x13] = 3;
    puVar2[0x14] = "nvram";
    puVar2[0x15] = 5;
    puVar2[0x16] = "vmxf";
    puVar2[0x17] = 4;
    *param_1 = 8;
    param_1[1] = 0;
    param_1[2] = 0;
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_7reserve17h2221993a5205d80eE(param_1,0,0xc);
    local_20 = param_1[2];
    local_30 = local_20 * 0x18 + *param_1;
    local_28 = param_1 + 2;
    _ZN97__LT_core__iter__adapters__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h61cbedc0e7d697e3E
              (puVar2,puVar2 + 0x18,&local_30);
    (*(code *)PTR___rust_dealloc_004f3b10)(puVar2,0xc0,8);
    return param_1;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h32f10317ed76b9c7E_004f4be8)(0xc0,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}