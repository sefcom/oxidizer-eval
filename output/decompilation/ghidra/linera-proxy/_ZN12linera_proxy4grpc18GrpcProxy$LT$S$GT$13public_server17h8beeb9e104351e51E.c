void _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_13public_server17h8beeb9e104351e51E
               (long *param_1,long param_2)

{
  long lVar1;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long local_228;
  undefined4 local_218;
  undefined4 local_210;
  ulong local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0;
  undefined local_1de;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_178;
  long local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long local_158;
  undefined local_150 [168];
  undefined local_a8 [48];
  undefined local_78 [96];
  
  if (*(char *)(param_2 + 400) == '\x01') {
    _ZN5tonic9transport3tls8Identity8from_pem17h20b1d834af507ec3E(local_a8);
    local_238 = 0x8000000000000000;
    local_208 = 0x8000000000000000;
    local_1e0 = 0;
    local_1de = 0;
    local_1e8 = 1000000000;
    (*(code *)
      PTR__ZN5tonic9transport6server3tls15ServerTlsConfig8identity17hbe7341e896f7cf1dE_0164e148)
              (local_78,&local_238,local_a8);
    local_188 = 0;
    local_238 = 0;
    local_1d8 = 1000000000;
    local_190 = 0x3b9aca01;
    local_218 = 0;
    local_210 = 0;
    local_208 = local_208 & 0xffffffff00000000;
    local_1c8 = 1000000000;
    local_1b8 = 1000000000;
    local_1f0 = 0x14;
    local_1e8 = 0;
    local_228 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_178 = 0x2000100;
    local_1a8 = 1000000000;
    _ZN5tonic9transport6server15Server_LT_L_GT_10tls_config17hab16857cd2d5d859E
              (&local_170,&local_238,local_78);
    if (local_170 == 2) {
      local_228 = local_158;
      uStack_230 = uStack_160;
      uStack_22c = uStack_15c;
      lVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h052124355700af81E
                        (&local_238);
      param_1[1] = lVar1;
      *param_1 = 2;
    }
    else {
      (*(code *)PTR_memcpy_0164bc18)(param_1 + 4,local_150,0xa8);
      param_1[3] = local_158;
      param_1[1] = CONCAT44(uStack_164,local_168);
      param_1[2] = CONCAT44(uStack_15c,uStack_160);
      *param_1 = local_170;
    }
  }
  else {
    *param_1 = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[9] = 0x14;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1000000000;
    *(undefined4 *)(param_1 + 0xe) = 1000000000;
    *(undefined4 *)(param_1 + 0x10) = 1000000000;
    *(undefined4 *)(param_1 + 0x12) = 1000000000;
    *(undefined4 *)(param_1 + 0x15) = 0x3b9aca01;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x2000100;
  }
  return;
}