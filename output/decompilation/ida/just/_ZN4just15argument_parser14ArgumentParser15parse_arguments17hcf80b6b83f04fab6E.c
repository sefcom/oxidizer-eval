__int64 __fastcall just::argument_parser::ArgumentParser::parse_arguments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // al
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // [rsp+8h] [rbp-140h] BYREF
  __int64 v10; // [rsp+18h] [rbp-130h]
  _QWORD v11[3]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v12; // [rsp+38h] [rbp-110h]
  _BYTE v13[55]; // [rsp+40h] [rbp-108h]
  char v14; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v15[55]; // [rsp+79h] [rbp-CFh]
  __int128 v16; // [rsp+B0h] [rbp-98h]
  __int128 v17; // [rsp+C0h] [rbp-88h]
  __int128 v18; // [rsp+D0h] [rbp-78h]
  _OWORD v19[6]; // [rsp+E0h] [rbp-68h] BYREF

  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  v10 = 0LL;
  v11[0] = a3;
  v11[1] = a4;
  v12 = 0LL;
  v11[2] = a2;
  while ( 1 )
  {
    just::argument_parser::ArgumentParser::parse_group(&v14, v11);
    v5 = v14;
    if ( v14 != 56 )
      break;
    *(_OWORD *)&v13[39] = *(_OWORD *)&v15[39];
    *(_OWORD *)&v13[23] = *(_OWORD *)&v15[23];
    *(_OWORD *)&v13[7] = *(_OWORD *)&v15[7];
    v19[0] = *(_OWORD *)&v15[7];
    v19[1] = *(_OWORD *)&v15[23];
    v19[2] = *(_OWORD *)&v15[39];
    alloc::vec::Vec<T,A>::push(&v9, v19);
    if ( v12 == a4 )
    {
      result = v10;
      *(_QWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_BYTE *)a1 = 56;
      return result;
    }
  }
  *(_QWORD *)&v13[47] = *(_QWORD *)&v15[47];
  *(_OWORD *)&v13[32] = *(_OWORD *)&v15[32];
  *(_OWORD *)&v13[16] = *(_OWORD *)&v15[16];
  *(_OWORD *)v13 = *(_OWORD *)v15;
  *(_OWORD *)(a1 + 88) = v18;
  *(_OWORD *)(a1 + 72) = v17;
  *(_OWORD *)(a1 + 56) = v16;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&v13[47];
  v7 = *(_OWORD *)v13;
  v8 = *(_OWORD *)&v13[16];
  *(_OWORD *)(a1 + 33) = *(_OWORD *)&v13[32];
  *(_OWORD *)(a1 + 17) = v8;
  *(_OWORD *)(a1 + 1) = v7;
  *(_BYTE *)a1 = v5;
  return core::ptr::drop_in_place<alloc::vec::Vec<just::argument_parser::ArgumentGroup>>(&v9);
}