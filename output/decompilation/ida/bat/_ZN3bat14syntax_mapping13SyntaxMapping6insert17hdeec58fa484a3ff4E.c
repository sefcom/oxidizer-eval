_OWORD *__fastcall bat::syntax_mapping::SyntaxMapping::insert(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  __int128 v7; // [rsp+0h] [rbp-E8h]
  __int128 v8; // [rsp+10h] [rbp-D8h]
  __int128 v9; // [rsp+20h] [rbp-C8h]
  __int128 v10; // [rsp+30h] [rbp-B8h]
  __int64 v11; // [rsp+58h] [rbp-90h] BYREF
  __int128 v12; // [rsp+60h] [rbp-88h]
  __int128 v13; // [rsp+70h] [rbp-78h]
  __int128 v14; // [rsp+80h] [rbp-68h]
  __int128 v15; // [rsp+90h] [rbp-58h]
  __int128 v16; // [rsp+A0h] [rbp-48h]
  __int128 v17; // [rsp+B8h] [rbp-30h]
  __int64 v18; // [rsp+C8h] [rbp-20h]

  bat::syntax_mapping::make_glob_matcher((__int64)&v11, a3, a4);
  v7 = v12;
  v8 = v13;
  v9 = v14;
  v10 = v15;
  if ( __OFSUB__(-v11, 1LL) )
  {
    a1[4] = v16;
    a1[3] = v10;
    a1[2] = v9;
    a1[1] = v8;
    *a1 = v7;
  }
  else
  {
    v17 = *a5;
    v18 = *((_QWORD *)a5 + 2);
    alloc::vec::Vec<T,A>::push(a2, &v11);
    *(_BYTE *)a1 = 13;
  }
  return a1;
}