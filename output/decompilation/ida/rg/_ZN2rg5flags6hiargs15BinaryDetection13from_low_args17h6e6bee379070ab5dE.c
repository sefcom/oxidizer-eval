__int64 __fastcall rg::flags::hiargs::BinaryDetection::from_low_args(char a1, char a2)
{
  __int64 result; // rax

  result = ((unsigned __int8)(a2 == 1) << 16) + 65538;
  if ( (a1 & 1) != 0 )
    result = 0LL;
  if ( a2 == 2 )
    return 0LL;
  return result;
}