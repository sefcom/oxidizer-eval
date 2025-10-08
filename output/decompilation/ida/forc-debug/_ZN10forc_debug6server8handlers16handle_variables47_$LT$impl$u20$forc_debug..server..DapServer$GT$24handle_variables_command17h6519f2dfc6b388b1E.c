__int64 __fastcall forc_debug::server::handlers::handle_variables::<impl forc_debug::server::DapServer>::handle_variables_command(
        __int64 a1)
{
  char v1; // bp
  __int128 v2; // xmm0
  unsigned __int64 v3; // r15
  __int64 result; // rax
  int v5; // eax
  __int128 v6; // [rsp+0h] [rbp-1D8h]
  __int64 v7; // [rsp+10h] [rbp-1C8h]
  char v8; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v9[7]; // [rsp+21h] [rbp-1B7h]
  _BYTE v10[24]; // [rsp+28h] [rbp-1B0h]
  __int64 v11; // [rsp+40h] [rbp-198h]
  _BYTE src[168]; // [rsp+48h] [rbp-190h] BYREF
  __int128 v13; // [rsp+F0h] [rbp-E8h]
  __int64 v14; // [rsp+100h] [rbp-D8h]
  _BYTE dest[168]; // [rsp+108h] [rbp-D0h] BYREF

  forc_debug::server::handlers::handle_variables::<impl forc_debug::server::DapServer>::get_variables(&v8);
  v1 = v8;
  if ( v8 == 51 )
  {
    v2 = *(_OWORD *)v10;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v10[16];
    *(_OWORD *)(a1 + 32) = v2;
    v3 = 0x8000000000000026LL;
    result = 0LL;
  }
  else
  {
    v5 = *(_DWORD *)v9;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)&v9[3];
    *(_DWORD *)(a1 + 17) = v5;
    v3 = *(_QWORD *)v10;
    v6 = *(_OWORD *)&v10[8];
    v7 = v11;
    memcpy(dest, src, sizeof(dest));
    *(_QWORD *)(a1 + 240) = v14;
    *(_OWORD *)(a1 + 224) = v13;
    *(_QWORD *)(a1 + 48) = v7;
    *(_OWORD *)(a1 + 32) = v6;
    memcpy((void *)(a1 + 56), dest, 0xA8uLL);
    *(_QWORD *)(a1 + 8) = 1LL;
    result = 1LL;
  }
  *(_BYTE *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)a1 = result;
  return result;
}