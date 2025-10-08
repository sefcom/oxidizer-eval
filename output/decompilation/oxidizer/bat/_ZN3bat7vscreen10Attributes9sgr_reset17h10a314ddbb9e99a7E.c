fn bat::vscreen::Attributes::sgr_reset(a0: i64) -> void {
    *((a0 + 264) as &i8) = 0;
    *((a0 + 16) as &i64) = 0;
    *((a0 + 40) as &i64) = 0;
    *((a0 + 64) as &i64) = 0;
    *((a0 + 136) as &i64) = 0;
    *((a0 + 160) as &i64) = 0;
    *((a0 + 184) as &i64) = 0;
    *((a0 + 208) as &i64) = 0;
    *((a0 + 232) as &i64) = 0;
    return;
}
