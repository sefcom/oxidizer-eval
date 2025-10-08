__int64 __fastcall sniffnet::networking::types::data_representation::ByteMultiple::get_char(
        _QWORD *a1,
        unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 0u:
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      break;
    case 1u:
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aK_1, 1LL);
      break;
    case 2u:
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aM, 1LL);
      break;
    case 3u:
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aG, 1LL);
      break;
    case 4u:
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aT_0, 1LL);
      break;
    case 5u:
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aP_1, 1LL);
      break;
  }
  return result;
}