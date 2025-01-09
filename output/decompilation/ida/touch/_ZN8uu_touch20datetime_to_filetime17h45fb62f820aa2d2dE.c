__int64 __fastcall uu_touch::datetime_to_filetime(unsigned int *a1)
{
  return a1[1] + 86400LL * (int)(chrono::naive::date::NaiveDate::num_days_from_ce(*a1) - 719163);
}
