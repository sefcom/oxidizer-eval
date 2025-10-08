__int64 __fastcall just::lexer::Lexer::internal_error(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h]
  __int64 v11; // [rsp+28h] [rbp-90h]
  __int128 v12; // [rsp+30h] [rbp-88h]
  int v13; // [rsp+40h] [rbp-78h]
  unsigned __int64 v14; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v15[104]; // [rsp+50h] [rbp-68h] BYREF

  v6 = *(_QWORD *)(a2 + 128);
  v7 = *(_OWORD *)(a2 + 112);
  LOBYTE(v13) = 35;
  v11 = 0LL;
  v12 = *(_OWORD *)(a2 + 152);
  v10 = v6;
  core::ops::function::FnMut::call_mut(
    v15,
    a3,
    a3,
    a4,
    a5,
    a6,
    v7,
    *((_QWORD *)&v7 + 1),
    v6,
    *(_QWORD *)(a2 + 136),
    *(_QWORD *)(a2 + 144),
    0LL,
    v12,
    *((_QWORD *)&v12 + 1),
    v13);
  v14 = 0x8000000000000028LL;
  return just::compile_error::CompileError::new(a1, (__int64)&v9, (__int64)&v14);
}