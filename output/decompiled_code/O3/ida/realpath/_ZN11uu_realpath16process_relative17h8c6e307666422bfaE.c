        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h]

  v6 = a6;
  if ( a3 )
  {
    if ( (unsigned __int8)std::path::Path::starts_with(*((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2), a3, a4) )
    {
      v13 = *((_QWORD *)a2 + 2);
      v12 = *a2;
      v10 = a3;
      if ( a5 )
        v10 = a5;
      else
        v6 = a4;
      return uucore::features::fs::make_path_relative_to(a1, &v12, v10, v6, a5, a6, v12, *((_QWORD *)&v12 + 1), v13);
    }
  }
  else if ( a5 )
  {
    v13 = *((_QWORD *)a2 + 2);
    v12 = *a2;
    v10 = a5;
    return uucore::features::fs::make_path_relative_to(a1, &v12, v10, v6, a5, a6, v12, *((_QWORD *)&v12 + 1), v13);
  }
  result = *((_QWORD *)a2 + 2);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *a2;
  return result;
}
