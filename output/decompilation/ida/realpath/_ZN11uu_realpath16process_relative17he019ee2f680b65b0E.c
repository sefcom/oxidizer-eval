__int64 __fastcall uu_realpath::process_relative(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    if ( (unsigned __int8)std::path::Path::starts_with(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16)) )
    {
      v9 = a3;
      if ( a5 )
        v9 = a5;
      else
        a6 = a4;
      return uucore::features::fs::make_path_relative_to(a1, a2, v9, a6);
    }
  }
  else if ( a5 )
  {
    v9 = a5;
    return uucore::features::fs::make_path_relative_to(a1, a2, v9, a6);
  }
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}