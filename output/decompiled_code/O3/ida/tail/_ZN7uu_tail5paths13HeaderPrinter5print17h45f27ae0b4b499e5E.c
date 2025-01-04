void __fastcall uu_tail::paths::HeaderPrinter::print(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  const char *v4; // rdx
  _QWORD v5[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v7[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[7]; // [rsp+40h] [rbp-38h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  if ( *a1 )
  {
    v3 = (unsigned __int8)a1[1];
    v4 = (_BYTE *)(&dword_0 + 1);
    if ( !a1[1] )
      v4 = "\n";
    v6[0] = v4;
    v6[1] = v3 ^ 1;
    v7[0] = v6;
    v7[1] = <&T as core::fmt::Display>::fmt;
    v7[2] = v5;
    v7[3] = <&T as core::fmt::Display>::fmt;
    v8[0] = &unk_1BC6E8;
    v8[1] = 3LL;
    v8[4] = 0LL;
    v8[2] = v7;
    v8[3] = 2LL;
    ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v8);
    a1[1] = 0;
  }
}
