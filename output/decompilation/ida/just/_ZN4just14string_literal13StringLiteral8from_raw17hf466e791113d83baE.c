__int64 __fastcall just::string_literal::StringLiteral::from_raw(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
  *(_BYTE *)(a1 + 42) = 0;
  *(_WORD *)(a1 + 40) = 512;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  return result;
}