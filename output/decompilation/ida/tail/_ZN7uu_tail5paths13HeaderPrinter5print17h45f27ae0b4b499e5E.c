void __fastcall uu_tail::paths::HeaderPrinter::print(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  const char *v7; // rdx
  _QWORD v8[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[7]; // [rsp+40h] [rbp-38h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  if ( *a1 )
  {
    v6 = (unsigned __int8)a1[1];
    v7 = (_BYTE *)(&dword_0 + 1);
    if ( !a1[1] )
      v7 = "\n";
    v9[0] = v7;
    v9[1] = v6 ^ 1;
    v10[0] = v9;
    v10[1] = <&T as core::fmt::Display>::fmt;
    v10[2] = v8;
    v10[3] = <&T as core::fmt::Display>::fmt;
    v11[0] = &unk_1BC6E8;
    v11[1] = 3LL;
    v11[4] = 0LL;
    v11[2] = v10;
    v11[3] = 2LL;
    ((void (__fastcall *)(_QWORD *, __int64, const char *, _QWORD *, __int64, __int64))std::io::stdio::_print)(
      v11,
      a2,
      v7,
      v8,
      a5,
      a6);
    a1[1] = 0;
  }
}
