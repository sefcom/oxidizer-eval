__int64 __fastcall linera_proxy::ProxyContext::from_options(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-218h] BYREF
  _BYTE src[488]; // [rsp+10h] [rbp-208h] BYREF

  linera_service::util::read_json(v11, *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120));
  v4 = v11[0];
  v5 = v11[1];
  result = -v11[0];
  if ( !__OFSUB__(-v11[0], 1LL) )
  {
    memcpy((void *)(a1 + 16), src, 0x1E8uLL);
    result = *(_QWORD *)(a2 + 184);
    v7 = *(_DWORD *)(a2 + 192);
    v8 = *(_QWORD *)(a2 + 200);
    v9 = *(_DWORD *)(a2 + 208);
    if ( *(_BYTE *)(a2 + 88) )
      v10 = *(_QWORD *)(a2 + 96);
    else
      v10 = 0LL;
    *(_QWORD *)(a1 + 504) = result;
    *(_DWORD *)(a1 + 512) = v7;
    *(_QWORD *)(a1 + 520) = v8;
    *(_DWORD *)(a1 + 528) = v9;
    *(_QWORD *)(a1 + 536) = v10;
  }
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = v4;
  return result;
}