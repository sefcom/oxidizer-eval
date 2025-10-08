unsigned __int64 __fastcall sniffnet::gui::types::timing_events::TimingEvents::threshold_adjust_expired_take(
        _OWORD *a1,
        __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // edx
  __int128 v4; // xmm0

  result = std::time::Instant::elapsed(a2);
  if ( result == 2 )
  {
    if ( v3 )
    {
LABEL_3:
      v4 = *(_OWORD *)(a2 + 16);
      a1[1] = *(_OWORD *)(a2 + 32);
      *a1 = v4;
      *(_QWORD *)(a2 + 16) = 2LL;
      return result;
    }
  }
  else if ( result > 2 )
  {
    goto LABEL_3;
  }
  *(_QWORD *)a1 = 2LL;
  return result;
}