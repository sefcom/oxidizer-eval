__int64 __fastcall uu_dd::Alarm::get_trigger(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(*(_QWORD *)a1 + 16LL);
  *(_BYTE *)(*(_QWORD *)a1 + 16LL) = 0;
  return result;
}
