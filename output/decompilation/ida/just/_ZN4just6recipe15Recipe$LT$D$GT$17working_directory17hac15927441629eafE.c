__int64 __fastcall just::recipe::Recipe<D>::working_directory(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int128 v12; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  _QWORD v14[9]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]

  result = just::attribute_set::AttributeSet::contains(a2 + 27, 9);
  if ( (_BYTE)result )
  {
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    just::execution_context::ExecutionContext::working_directory((__int64)&v12, a3, a4);
    v8 = a2[27];
    v9 = a2[28];
    v10 = v8;
    if ( v8 )
      v10 = a2[29];
    v14[0] = v8 != 0;
    v14[1] = 0LL;
    v14[2] = v8;
    v14[3] = v9;
    v14[4] = v14[0];
    v14[5] = 0LL;
    v14[6] = v8;
    v14[7] = v9;
    v14[8] = v10;
    while ( 1 )
    {
      v11 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v14);
      if ( !v11 )
        break;
      if ( *v11 == 0x8000000000000014LL )
      {
        std::path::Path::join(&v15, *((_QWORD *)&v12 + 1), v13, v11 + 1);
        a1[2] = v16;
        *(_OWORD *)a1 = v15;
        return core::ptr::drop_in_place<std::path::PathBuf>(&v12);
      }
    }
    result = v13;
    a1[2] = v13;
    *(_OWORD *)a1 = v12;
  }
  return result;
}