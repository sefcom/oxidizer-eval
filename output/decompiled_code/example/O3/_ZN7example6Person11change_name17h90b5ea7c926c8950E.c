__int64 __fastcall example::Person::change_name(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    _rust_dealloc(a1[1], *a1, 1LL);
  result = *(_QWORD *)(a2 + 16);
  a1[2] = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}
