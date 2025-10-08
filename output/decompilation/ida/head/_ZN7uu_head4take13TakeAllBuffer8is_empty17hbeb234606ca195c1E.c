bool __fastcall uu_head::take::TakeAllBuffer::is_empty(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a2 > a1 )
    core::panicking::panic(aAssertionFaile_0, 55LL, &off_F7B48);
  return a2 == a1;
}