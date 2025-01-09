__int64 __fastcall uu_env::native_int_str::from_native_int_representation_owned(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}
