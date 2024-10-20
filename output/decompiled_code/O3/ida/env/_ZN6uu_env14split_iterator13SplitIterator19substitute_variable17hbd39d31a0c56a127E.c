__int64 __fastcall uu_env::split_iterator::SplitIterator::substitute_variable(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  const void *v3; // r13
  size_t v4; // r12
  __int64 v5; // r15
  __int64 v6; // r15
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  const void *v10; // r12
  size_t v11; // r13
  __int64 v12; // rbp
  __int64 v13; // [rsp+8h] [rbp-60h] BYREF
  size_t v14[2]; // [rsp+10h] [rbp-58h]
  size_t n[2]; // [rsp+20h] [rbp-48h]
  _QWORD *v16; // [rsp+30h] [rbp-38h] BYREF

  v16 = a2 + 3;
  uu_env::variable_parser::VariableParser::parse_variable((__int64)&v13, &v16);
  result = (unsigned int)v13;
  if ( (_DWORD)v13 == 8 )
  {
    v3 = (const void *)n[0];
    v4 = n[1];
    std::env::_var_os(&v13, v14[0], v14[1]);
    v5 = v13;
    result = 0x8000000000000000LL;
    if ( v13 == 0x8000000000000000LL )
    {
      if ( v3 )
      {
        v6 = a2[2];
        if ( *a2 - v6 < v4 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v4);
          v6 = a2[2];
        }
        result = (__int64)memcpy((void *)(v6 + a2[1]), v3, v4);
        a2[2] = v4 + v6;
      }
      *(_DWORD *)a1 = 8;
    }
    else
    {
      v10 = (const void *)v14[0];
      v11 = v14[1];
      v12 = a2[2];
      if ( *a2 - v12 < v14[1] )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v14[1]);
        v12 = a2[2];
      }
      result = (__int64)memcpy((void *)(v12 + a2[1]), v10, v11);
      a2[2] = v11 + v12;
      *(_DWORD *)a1 = 8;
      if ( v5 )
        return _rust_dealloc(v10, v5, 1LL);
    }
  }
  else
  {
    v7 = HIDWORD(v13);
    v8 = *(_OWORD *)v14;
    v9 = *(_OWORD *)n;
    *(_DWORD *)a1 = v13;
    *(_DWORD *)(a1 + 4) = v7;
    *(_OWORD *)(a1 + 8) = v8;
    *(_OWORD *)(a1 + 24) = v9;
  }
  return result;
}
