__int64 __fastcall forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::handle_stack_trace_command(
        __int64 a1)
{
  char v1; // bp
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // r15
  __int128 v7; // [rsp+0h] [rbp-1D8h]
  __int64 v8; // [rsp+10h] [rbp-1C8h]
  __int128 v9; // [rsp+20h] [rbp-1B8h]
  char v10; // [rsp+30h] [rbp-1A8h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-1A7h]
  __int128 v12; // [rsp+38h] [rbp-1A0h]
  __int64 v13; // [rsp+48h] [rbp-190h]
  __int128 v14; // [rsp+50h] [rbp-188h]
  __int64 v15; // [rsp+60h] [rbp-178h]
  _BYTE src[152]; // [rsp+68h] [rbp-170h] BYREF
  __int128 v17; // [rsp+100h] [rbp-D8h]
  __int64 v18; // [rsp+110h] [rbp-C8h]
  _BYTE dest[152]; // [rsp+118h] [rbp-C0h] BYREF

  forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::stack_trace(&v10);
  v1 = v10;
  if ( v10 == 51 )
  {
    v2 = v12;
    *(_QWORD *)(a1 + 64) = v13;
    *(_OWORD *)(a1 + 48) = v2;
    v3 = 0x800000000000001FLL;
    result = 0LL;
  }
  else
  {
    v5 = *(_DWORD *)v11;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v11[3];
    *(_DWORD *)(a1 + 17) = v5;
    v9 = v12;
    v6 = v13;
    v7 = v14;
    v8 = v15;
    memcpy(dest, src, sizeof(dest));
    *(_QWORD *)(a1 + 240) = v18;
    *(_OWORD *)(a1 + 224) = v17;
    *(_QWORD *)(a1 + 64) = v8;
    *(_OWORD *)(a1 + 48) = v7;
    memcpy((void *)(a1 + 72), dest, 0x98uLL);
    v3 = v9;
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 8) = 1LL;
    result = 1LL;
  }
  *(_BYTE *)(a1 + 16) = v1;
  *(_OWORD *)(a1 + 24) = v3;
  *(_QWORD *)a1 = result;
  return result;
}