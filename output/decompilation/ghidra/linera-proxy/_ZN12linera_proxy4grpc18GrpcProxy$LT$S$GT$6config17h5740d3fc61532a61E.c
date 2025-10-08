long _ZN12linera_proxy4grpc18GrpcProxy_LT_S_GT_6config17h5740d3fc61532a61E(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x188) < *(ulong *)(param_1 + 0x100)) {
    return *(ulong *)(param_1 + 0x188) * 0x20 + *(long *)(param_1 + 0xf8);
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0164bc68)
            (&DAT_0035264c,0x19,&PTR_s_linera_service_src_proxy_grpc_rs_015a9598);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}