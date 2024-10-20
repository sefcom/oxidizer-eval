__int64 __fastcall uu_env::print_env(char a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi
  char v9; // [rsp+7h] [rbp-151h] BYREF
  __int64 v10; // [rsp+8h] [rbp-150h] BYREF
  __int128 v11; // [rsp+10h] [rbp-148h] BYREF
  __int64 v12; // [rsp+20h] [rbp-138h]
  __int128 v13; // [rsp+30h] [rbp-128h] BYREF
  __int64 v14; // [rsp+40h] [rbp-118h]
  __int128 v15; // [rsp+50h] [rbp-108h] BYREF
  __int128 v16; // [rsp+60h] [rbp-F8h]
  __int64 v17; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v18[6]; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD v19[6]; // [rsp+A8h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-70h]
  __int128 v22; // [rsp+F0h] [rbp-68h]
  __int64 v23; // [rsp+100h] [rbp-58h]
  _OWORD v24[5]; // [rsp+108h] [rbp-50h] BYREF

  v9 = a1;
  v17 = std::io::stdio::stdout();
  v10 = std::io::stdio::Stdout::lock(&v17);
  std::env::vars(v24);
  v16 = v24[1];
  v15 = v24[0];
  while ( 1 )
  {
    <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v20, &v15);
    if ( (_QWORD)v20 == 0x8000000000000000LL )
      break;
    v12 = v21;
    v11 = v20;
    v14 = v23;
    v13 = v22;
    v19[0] = &v11;
    v19[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v19[2] = &v13;
    v19[3] = <alloc::string::String as core::fmt::Display>::fmt;
    v19[4] = &v9;
    v19[5] = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v18[0] = &unk_10C478;
    v18[1] = 3LL;
    v18[4] = 0LL;
    v18[2] = v19;
    v18[3] = 3LL;
    v1 = std::io::Write::write_fmt(&v10, v18);
    if ( v1 )
    {
      v18[0] = v1;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, v18, &off_10C3F8, &off_10C4A8);
    }
    if ( (_QWORD)v13 )
      _rust_dealloc(*((_QWORD *)&v13 + 1), v13, 1LL);
    if ( (_QWORD)v11 )
      _rust_dealloc(*((_QWORD *)&v11 + 1), v11, 1LL);
  }
  if ( *((_QWORD *)&v16 + 1) != *((_QWORD *)&v15 + 1) )
  {
    v2 = (*((_QWORD *)&v16 + 1) - *((_QWORD *)&v15 + 1)) / 0x30uLL;
    v3 = (_QWORD *)(*((_QWORD *)&v15 + 1) + 32LL);
    do
    {
      v4 = *(v3 - 4);
      if ( v4 )
        _rust_dealloc(*(v3 - 3), v4, 1LL);
      v5 = *(v3 - 1);
      if ( v5 )
        _rust_dealloc(*v3, v5, 1LL);
      v3 += 6;
      --v2;
    }
    while ( v2 );
  }
  result = v16;
  if ( (_QWORD)v16 )
    result = _rust_dealloc(v15, 48 * v16, 8LL);
  v7 = v10;
  if ( (*(_DWORD *)(v10 + 12))-- == 1 )
  {
    *(_QWORD *)v7 = 0LL;
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v7 + 8), 0);
    if ( (_DWORD)result == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(v7 + 8);
  }
  return result;
}
