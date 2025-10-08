__int64 __fastcall uu_stat::Stater::generate_tokens(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v16; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-A8h]
  _QWORD *v19; // [rsp+38h] [rbp-A0h]
  __int64 v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+48h] [rbp-90h]
  __int64 v22; // [rsp+50h] [rbp-88h]
  __int128 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+68h] [rbp-70h] BYREF
  __int64 v25; // [rsp+70h] [rbp-68h]
  unsigned __int64 v26; // [rsp+78h] [rbp-60h]
  _QWORD v27[3]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v28; // [rsp+98h] [rbp-40h]

  v19 = a1;
  *(_QWORD *)&v17 = 0LL;
  *((_QWORD *)&v17 + 1) = 8LL;
  v18 = 0LL;
  core::iter::traits::iterator::Iterator::collect(&v24, a2, a2 + a3);
  v16 = 0LL;
  if ( a3 )
  {
    v5 = v25;
    v6 = v26;
    v7 = 0LL;
    do
    {
      if ( v7 >= v6 )
        core::panicking::panic_bounds_check(v7, v6, &off_119F08);
      v8 = *(_DWORD *)(v5 + 4 * v7);
      if ( v8 == 37 )
      {
        uu_stat::Stater::handle_percent_case((__int64)&v20, v5, v6, &v16, a3, a2, a3);
        v9 = v22;
        if ( v20 == 5 )
        {
          v14 = v19;
          v19[1] = v21;
          v14[2] = v9;
          *v14 = 0x8000000000000000LL;
          core::ptr::drop_in_place<alloc::vec::Vec<char>>(v24, v5);
          return core::ptr::drop_in_place<alloc::vec::Vec<uu_stat::Token>>(v17, *((_QWORD *)&v17 + 1));
        }
        v28 = v23;
        v27[0] = v20;
        v27[1] = v21;
        v27[2] = v22;
        alloc::vec::Vec<T,A>::push(&v17, v27, &off_119F20);
      }
      else if ( v8 == 92 )
      {
        if ( a4 )
        {
          uu_stat::Stater::handle_escape_sequences((__int64)&v20, v5, v6, &v16, a3, a2, a3);
          alloc::vec::Vec<T,A>::push(&v17, &v20, &off_119F50);
        }
        else
        {
          LODWORD(v21) = 92;
          v20 = 3LL;
          alloc::vec::Vec<T,A>::push(&v17, &v20, &off_119F38);
        }
      }
      else
      {
        LODWORD(v21) = *(_DWORD *)(v5 + 4 * v7);
        v20 = 3LL;
        alloc::vec::Vec<T,A>::push(&v17, &v20, &off_119F68);
      }
      v7 = v16 + 1;
      v16 = v7;
    }
    while ( v7 < a3 );
  }
  if ( !a4 )
  {
    LODWORD(v20) = 0;
    v10 = core::char::methods::encode_utf8_raw(10LL, &v20);
    if ( !(unsigned __int8)core::slice::<impl [T]>::ends_with(a2, a3, v10, v11) )
    {
      LODWORD(v21) = 10;
      v20 = 3LL;
      alloc::vec::Vec<T,A>::push(&v17, &v20, &off_119EF0);
    }
  }
  v12 = v19;
  v19[2] = v18;
  *v12 = v17;
  return core::ptr::drop_in_place<alloc::vec::Vec<char>>(v24, v25);
}