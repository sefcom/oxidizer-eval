__int64 __fastcall fd::exec::CommandBuilder::finish(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v7; // [rsp+10h] [rbp-1D8h]
  _BYTE src[216]; // [rsp+18h] [rbp-1D0h] BYREF
  _BYTE dest[216]; // [rsp+F0h] [rbp-F8h] BYREF

  if ( !*(_QWORD *)(a1 + 312) )
    return 0LL;
  v1 = a1 + 80;
  if ( (argmax::Command::try_args(a1 + 80, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72)) & 1) != 0 )
    return v2;
  argmax::Command::status(&v6, v1);
  if ( (_DWORD)v6 == 1 )
    return v7;
  if ( HIDWORD(v6) )
    *(_BYTE *)(a1 + 328) = 4;
  fd::exec::CommandBuilder::new_command(&v6, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  v4 = v6;
  result = v7;
  if ( !__OFSUB__(-v6, 1LL) )
  {
    v5 = v7;
    memcpy(dest, src, sizeof(dest));
    core::ptr::drop_in_place<argmax::Command>(v1);
    *(_QWORD *)(a1 + 80) = v4;
    *(_QWORD *)(a1 + 88) = v5;
    memcpy((void *)(a1 + 96), dest, 0xD8uLL);
    *(_QWORD *)(a1 + 312) = 0LL;
    return 0LL;
  }
  return result;
}