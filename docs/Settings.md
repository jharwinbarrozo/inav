# CLI Variable Reference

| Variable Name | Default Value | Description |
| ------------- | ------------- | ----------- |
| 3d_deadband_high | 1514 | High value of throttle deadband for 3D mode (when stick is in the deadband range, the value in 3d_neutral is used instead) |
| 3d_deadband_low | 1406 | Low value of throttle deadband for 3D mode (when stick is in the 3d_deadband_throttle range, the fixed values of 3d_deadband_low / _high are used instead) |
| 3d_deadband_throttle | 50 | Throttle signal will be held to a fixed value when throttle is centered with an error margin defined in this parameter. |
| 3d_neutral | 1460 | Neutral (stop) throttle value for 3D mode |
| acc_event_threshold_high | 0 | Acceleration threshold [cm/s/s] for impact / high g event text messages sent by SIM module. Acceleration values greater than 4 g can occur in fixed wing flight without an impact, so a setting of 4000 or greater is suggested. 0 = detection off. |
| acc_event_threshold_low | 0 | Acceleration threshold [cm/s/s] for low-g / freefall detection text messages sent by SIM module. A setting of less than 100 is suggested. Valid values: [0-900], 0 = detection off. |
| acc_event_threshold_neg_x | 0 | Acceleration threshold [cm/s/s] for backwards acceleration / fixed wing landing detection text messages sent by SIM module. Suggested value for fixed wing: 1100. 0 = detection off. |
| acc_hardware | AUTO | Selection of acc hardware. See Wiki Sensor auto detect and hardware failure detection for more info |
| acc_lpf_hz | 15 | Software-based filter to remove mechanical vibrations from the accelerometer measurements. Value is cutoff frequency (Hz). For larger frames with bigger props set to lower value. |
| acc_lpf_type | BIQUAD | Specifies the type of the software LPF of the acc signals. BIQUAD gives better filtering and more delay, PT1 less filtering and less delay, so use only on clean builds. |
| acc_notch_cutoff | 1 |  |
| acc_notch_hz | 0 |  |
| accgain_x | 4096 | Calculated value after '6 position avanced calibration'. Uncalibrated value is 4096. See Wiki page. |
| accgain_y | 4096 | Calculated value after '6 position avanced calibration'. Uncalibrated value is 4096. See Wiki page. |
| accgain_z | 4096 | Calculated value after '6 position avanced calibration'. Uncalibrated value is 4096. See Wiki page. |
| acczero_x | 0 | Calculated value after '6 position avanced calibration'. See Wiki page. |
| acczero_y | 0 | Calculated value after '6 position avanced calibration'. See Wiki page. |
| acczero_z | 0 | Calculated value after '6 position avanced calibration'. See Wiki page. |
| airmode_throttle_threshold | 1300 | Defines airmode THROTTLE activation threshold when `airmode_type` **THROTTLE_THRESHOLD** is used |
| airmode_type | STICK_CENTER | Defines the Airmode state handling type. Default **STICK_CENTER** is the classical approach in which Airmode is always active if enabled, but when the throttle is low and ROLL/PITCH/YAW sticks are centered, Iterms is not allowed to grow (ANTI_WINDUP). **THROTTLE_THRESHOLD** is the Airmode behavior known from Betaflight. In this mode, Airmode is active as soon THROTTLE position is above `airmode_throttle_threshold` and stays active until disarm. ANTI_WINDUP is never triggered. For small Multirotors (up to 7-inch propellers) it is suggested to switch to **THROTTLE_THRESHOLD** since it keeps full stabilization no matter what pilot does with the sticks. Fixed Wings always use **STICK_CENTER_ONCE** or **STICK_CENTER** modes. |
| airspeed_adc_channel | _target default_ | ADC channel to use for analog pitot tube (airspeed) sensor. If board doesn't have a dedicated connector for analog airspeed sensor will default to 0 |
| align_acc | DEFAULT | When running on non-default hardware or adding support for new sensors/sensor boards, these values are used for sensor orientation. When carefully understood, these values can also be used to rotate (in 90deg steps) or flip the board. Possible values are: DEFAULT, CW0_DEG, CW90_DEG, CW180_DEG, CW270_DEG, CW0_DEG_FLIP, CW90_DEG_FLIP, CW180_DEG_FLIP, CW270_DEG_FLIP. |
| align_board_pitch | 0 | Arbitrary board rotation in deci-degrees (0.1 degree), to allow mounting it sideways / upside down / rotated etc |
| align_board_roll | 0 | Arbitrary board rotation in deci-degrees (0.1 degree), to allow mounting it sideways / upside down / rotated etc |
| align_board_yaw | 0 | Arbitrary board rotation in deci-degrees (0.1 degree), to allow mounting it sideways / upside down / rotated etc |
| align_gyro | DEFAULT | When running on non-default hardware or adding support for new sensors/sensor boards, these values are used for sensor orientation. When carefully understood, these values can also be used to rotate (in 90deg steps) or flip the board. Possible values are: DEFAULT, CW0_DEG, CW90_DEG, CW180_DEG, CW270_DEG, CW0_DEG_FLIP, CW90_DEG_FLIP, CW180_DEG_FLIP, CW270_DEG_FLIP. |
| align_mag | DEFAULT | When running on non-default hardware or adding support for new sensors/sensor boards, these values are used for sensor orientation. When carefully understood, these values can also be used to rotate (in 90deg steps) or flip the board. Possible values are: DEFAULT, CW0_DEG, CW90_DEG, CW180_DEG, CW270_DEG, CW0_DEG_FLIP, CW90_DEG_FLIP, CW180_DEG_FLIP, CW270_DEG_FLIP. |
| align_mag_pitch | 0 | Same as align_mag_roll, but for the pitch axis. |
| align_mag_roll | 0 | Set the external mag alignment on the roll axis (in 0.1 degree steps). If this value is non-zero, the compass is assumed to be externally mounted and both the board and on-board compass alignent (align_mag) are ignored. See also align_mag_pitch and align_mag_yaw. |
| align_mag_yaw | 0 | Same as align_mag_roll, but for the yaw axis. |
| align_opflow | CW0FLIP | Optical flow module alignment (default CW0_DEG_FLIP) |
| alt_hold_deadband | 50 | Defines the deadband of throttle during alt_hold [r/c points] |
| antigravity_accelerator | 1 |  |
| antigravity_cutoff_lpf_hz | 15 | Antigravity cutoff frequenct for Throtte filter. Antigravity is based on the difference between actual and filtered throttle input. The bigger is the difference, the bigger Antigravity gain |
| antigravity_gain | 1 | Max Antigravity gain. `1` means Antigravity is disabled, `2` means Iterm is allowed to double during rapid throttle movements |
| applied_defaults | 0 | Internal (configurator) hint. Should not be changed manually |
| baro_cal_tolerance | 150 | Baro calibration tolerance in cm. The default should allow the noisiest baro to complete calibration [cm]. |
| baro_hardware | AUTO | Selection of baro hardware. See Wiki Sensor auto detect and hardware failure detection for more info |
| baro_median_filter | ON | 3-point median filtering for barometer readouts. No reason to change this setting |
| bat_cells | 0 | Number of cells of the battery (0 = auto-detect), see battery documentation. 7S, 9S and 11S batteries cannot be auto-detected. |
| bat_voltage_src | RAW | Chose between raw and sag compensated battery voltage to use for battery alarms and telemetry. Possible values are `RAW` and `SAG_COMP` |
| battery_capacity | 0 | Set the battery capacity in mAh or mWh (see `battery_capacity_unit`). Used to calculate the remaining battery capacity. |
| battery_capacity_critical | 0 | If the remaining battery capacity goes below this threshold the battery is considered empty and the beeper will emit long beeps. |
| battery_capacity_unit | MAH | Unit used for `battery_capacity`, `battery_capacity_warning` and `battery_capacity_critical` [MAH/MWH] (milliAmpere hour / milliWatt hour). |
| battery_capacity_warning | 0 | If the remaining battery capacity goes below this threshold the beeper will emit short beeps and the relevant OSD items will blink. |
| blackbox_device | _target default_ | Selection of where to write blackbox data |
| blackbox_rate_denom | 1 | Blackbox logging rate denominator. See blackbox_rate_num. |
| blackbox_rate_num | 1 | Blackbox logging rate numerator. Use num/denom settings to decide if a frame should be logged, allowing control of the portion of logged loop iterations |
| cpu_underclock | OFF | This option is only available on certain architectures (F3 CPUs at the moment). It makes CPU clock lower to reduce interference to long-range RC systems working at 433MHz |
| cruise_power | 0 | Power draw at cruise throttle used for remaining flight time/distance estimation in 0.01W unit |
| current_adc_channel | _target default_ | ADC channel to use for analog current sensor input. Defaults to board CURRENT sensor input (if available). 0 = disabled |
| current_meter_offset | _target default_ | This sets the output offset voltage of the current sensor in millivolts. |
| current_meter_scale | _target default_ | This sets the output voltage to current scaling for the current sensor in 0.1 mV/A steps. 400 is 40mV/A such as the ACS756 sensor outputs. 183 is the setting for the uberdistro with a 0.25mOhm shunt. |
| current_meter_type | ADC | ADC , VIRTUAL, NONE. The virtual current sensor, once calibrated, estimates the current value from throttle position. |
| d_boost_factor | 1.25 |  |
| d_boost_gyro_delta_lpf_hz | 80 |  |
| d_boost_max_at_acceleration | 7500 |  |
| deadband | 5 | These are values (in us) by how much RC input can be different before it's considered valid. For transmitters with jitter on outputs, this value can be increased. Defaults are zero, but can be increased up to 10 or so if rc inputs twitch while idle. |
| debug_mode | NONE | Defines debug values exposed in debug variables (developer / debugging setting) |
| disarm_kill_switch | ON | Disarms the motors independently of throttle value. Setting to OFF reverts to the old behaviour of disarming only when the throttle is low. Only applies when arming and disarming with an AUX channel. |
| display_force_sw_blink | OFF | OFF = OSD hardware blink / ON = OSD software blink. If OSD warning text/values are invisible, try setting this to ON |
| dji_esc_temp_source | ESC | Re-purpose the ESC temperature field for IMU/BARO temperature |
| dji_speed_source | GROUND | Sets the speed type displayed by the DJI OSD: GROUND, 3D, AIR |
| dji_use_name_for_messages | ON | Re-purpose the craft name field for messages. Replace craft name with :WTSED for Warnings|Throttle|Speed|Efficiency|Trip distance |
| dji_workarounds | 1 | Enables workarounds for different versions of MSP protocol used |
| dterm_lpf2_hz | 0 | Cutoff frequency for stage 2 D-term low pass filter |
| dterm_lpf2_type | BIQUAD | Defines the type of stage 1 D-term LPF filter. Possible values: `PT1`, `BIQUAD`. `PT1` offers faster filter response while `BIQUAD` better attenuation. |
| dterm_lpf_hz | 40 | Dterm low pass filter cutoff frequency. Default setting is very conservative and small multirotors should use higher value between 80 and 100Hz. 80 seems like a gold spot for 7-inch builds while 100 should work best with 5-inch machines. If motors are getting too hot, lower the value |
| dterm_lpf_type | BIQUAD | Defines the type of stage 1 D-term LPF filter. Possible values: `PT1`, `BIQUAD`. `PT1` offers faster filter response while `BIQUAD` better attenuation. |
| dynamic_gyro_notch_enabled | OFF | Enable/disable dynamic gyro notch also known as Matrix Filter |
| dynamic_gyro_notch_min_hz | 150 | Minimum frequency for dynamic notches. Default value of `150` works best with 5" multirors. Should be lowered with increased size of propellers. Values around `100` work fine on 7" drones. 10" can go down to `60` - `70` |
| dynamic_gyro_notch_q | 120 | Q factor for dynamic notches |
| dynamic_gyro_notch_range | MEDIUM | Range for dynamic gyro notches. `MEDIUM` for 5", `HIGH` for 3" and `MEDIUM`/`LOW` for 7" and bigger propellers |
| eleres_freq | 435 |  |
| eleres_loc_delay | 240 |  |
| eleres_loc_en | OFF |  |
| eleres_loc_power | 7 |  |
| eleres_signature | 0 |  |
| eleres_telemetry_en | OFF |  |
| eleres_telemetry_power | 7 |  |
| esc_sensor_listen_only | OFF | Enable when BLHeli32 Auto Telemetry function is used. Disable in every other case |
| failsafe_delay | 5 | Time in deciseconds to wait before activating failsafe when signal is lost. See [Failsafe documentation](Failsafe.md#failsafe_delay). |
| failsafe_fw_pitch_angle | 100 | Amount of dive/climb when `SET-THR` failsafe is active on a fixed-wing machine. In 1/10 deg (deci-degrees). Negative values = climb |
| failsafe_fw_roll_angle | -200 | Amount of banking when `SET-THR` failsafe is active on a fixed-wing machine. In 1/10 deg (deci-degrees). Negative values = left roll |
| failsafe_fw_yaw_rate | -45 | Requested yaw rate to execute when `SET-THR` failsafe is active on a fixed-wing machine. In deg/s. Negative values = left turn |
| failsafe_lights | ON | Enable or disable the lights when the `FAILSAFE` flight mode is enabled. The target needs to be compiled with `USE_LIGHTS` [ON/OFF]. |
| failsafe_lights_flash_on_time | 100 | Flash lights ON time in milliseconds when `failsafe_lights` is ON and `FAILSAFE` flight mode is enabled. [20-65535]. |
| failsafe_lights_flash_period | 1000 | Time in milliseconds between two flashes when `failsafe_lights` is ON and `FAILSAFE` flight mode is enabled [40-65535]. |
| failsafe_min_distance | 0 | If failsafe happens when craft is closer than this distance in centimeters from home, failsafe will not execute regular failsafe_procedure, but will execute procedure specified in failsafe_min_distance_procedure instead. 0 = Normal failsafe_procedure always taken. |
| failsafe_min_distance_procedure | DROP | What failsafe procedure to initiate in Stage 2 when craft is closer to home than failsafe_min_distance. See [Failsafe documentation](Failsafe.md#failsafe_throttle). |
| failsafe_mission | ON | If set to `OFF` the failsafe procedure won't be triggered and the mission will continue if the FC is in WP (automatic mission) mode |
| failsafe_off_delay | 200 | Time in deciseconds to wait before turning off motors when failsafe is activated. 0 = No timeout. See [Failsafe documentation](Failsafe.md#failsafe_off_delay). |
| failsafe_procedure | SET-THR | What failsafe procedure to initiate in Stage 2. See [Failsafe documentation](Failsafe.md#failsafe_throttle). |
| failsafe_recovery_delay | 5 | Time in deciseconds to wait before aborting failsafe when signal is recovered. See [Failsafe documentation](Failsafe.md#failsafe_recovery_delay). |
| failsafe_stick_threshold | 50 | Threshold for stick motion to consider failsafe condition resolved. If non-zero failsafe won't clear even if RC link is restored - you have to move sticks to exit failsafe. |
| failsafe_throttle | 1000 | Throttle level used for landing when failsafe is enabled. See [Failsafe documentation](Failsafe.md#failsafe_throttle). |
| failsafe_throttle_low_delay | 0 | If failsafe activated when throttle is low for this much time - bypass failsafe and disarm, in 10th of seconds. 0 = No timeout |
| fixed_wing_auto_arm | OFF | Auto-arm fixed wing aircraft on throttle above min_check, and disarming with stick commands are disabled, so power cycle is required to disarm. Requires enabled motorstop and no arm switch configured. |
| flaperon_throw_offset | 200 | Defines throw range in us for both ailerons that will be passed to servo mixer via input source 14 (`FEATURE FLAPS`) when FLAPERON mode is activated. |
| flip_over_after_crash_power_factor | 65 | flip over after crash power factor |
| fpv_mix_degrees | 0 |  |
| frsky_coordinates_format | 0 | D-Series telemetry only: FRSKY_FORMAT_DMS (default), FRSKY_FORMAT_NMEA |
| frsky_default_latitude | 0 | D-Series telemetry only: OpenTX needs a valid set of coordinates to show compass value. A fake value defined in this setting is sent while no fix is acquired. |
| frsky_default_longitude | 0 | D-Series telemetry only: OpenTX needs a valid set of coordinates to show compass value. A fake value defined in this setting is sent while no fix is acquired. |
| frsky_pitch_roll | OFF | S.Port and D-Series telemetry: Send pitch and roll degrees*10 instead of raw accelerometer data |
| frsky_unit | METRIC | Not used? [METRIC/IMPERIAL] |
| frsky_vfas_precision | 0 | D-Series telemetry only: Set to 1 to send raw VBat value in 0.1V resolution for receivers that can handle it, or 0 (default) to use the standard method |
| fw_autotune_ff_to_i_tc | 600 | FF to I time (defines time for I to reach the same level of response as FF) [ms] |
| fw_autotune_ff_to_p_gain | 10 | FF to P gain (strength relationship) [%] |
| fw_autotune_overshoot_time | 100 | Time [ms] to detect sustained overshoot |
| fw_autotune_threshold | 50 | Threshold [%] of max rate to consider overshoot/undershoot detection |
| fw_autotune_undershoot_time | 200 | Time [ms] to detect sustained undershoot |
| fw_d_level | 75 | Fixed-wing attitude stabilisation HORIZON transition point |
| fw_d_pitch | 0 | Fixed wing rate stabilisation D-gain for PITCH |
| fw_d_roll | 0 | Fixed wing rate stabilisation D-gain for ROLL |
| fw_d_yaw | 0 | Fixed wing rate stabilisation D-gain for YAW |
| fw_ff_pitch | 50 | Fixed-wing rate stabilisation FF-gain for PITCH |
| fw_ff_roll | 50 | Fixed-wing rate stabilisation FF-gain for ROLL |
| fw_ff_yaw | 60 | Fixed-wing rate stabilisation FF-gain for YAW |
| fw_i_level | 5 | Fixed-wing attitude stabilisation low-pass filter cutoff |
| fw_i_pitch | 7 | Fixed-wing rate stabilisation I-gain for PITCH |
| fw_i_roll | 7 | Fixed-wing rate stabilisation I-gain for ROLL |
| fw_i_yaw | 10 | Fixed-wing rate stabilisation I-gain for YAW |
| fw_iterm_limit_stick_position | 0.5 | Iterm is not allowed to grow when stick position is above threshold. This solves the problem of bounceback or followthrough when full stick deflection is applied on poorely tuned fixed wings. In other words, stabilization is partialy disabled when pilot is actively controlling the aircraft and active when sticks are not touched. `0` mean stick is in center position, `1` means it is fully deflected to either side |
| fw_iterm_throw_limit | 165 | Limits max/min I-term value in stabilization PID controller in case of Fixed Wing. It solves the problem of servo saturation before take-off/throwing the airplane into the air. By default, error accumulated in I-term can not exceed 1/3 of servo throw (around 165us). Set 0 to disable completely. |
| fw_level_pitch_trim | 0 | Pitch trim for self-leveling flight modes. In degrees. +5 means airplane nose should be raised 5 deg from level |
| fw_loiter_direction | RIGHT | Direction of loitering: center point on right wing (clockwise - default), or center point on left wing (counterclockwise). If equal YAW then can be changed in flight using a yaw stick. |
| fw_min_throttle_down_pitch | 0 | Automatic pitch down angle when throttle is at 0 in angle mode. Progressively applied between cruise throttle and zero throttle (decidegrees) |
| fw_p_level | 20 | Fixed-wing attitude stabilisation P-gain |
| fw_p_pitch | 5 | Fixed-wing rate stabilisation P-gain for PITCH |
| fw_p_roll | 5 | Fixed-wing rate stabilisation P-gain for ROLL |
| fw_p_yaw | 6 | Fixed-wing rate stabilisation P-gain for YAW |
| fw_reference_airspeed | 1000 | Reference airspeed. Set this to airspeed at which PIDs were tuned. Usually should be set to cruise airspeed. Also used for coordinated turn calculation if airspeed sensor is not present. |
| fw_tpa_time_constant | 0 | TPA smoothing and delay time constant to reflect non-instant speed/throttle response of the plane. Planes with low thrust/weight ratio generally need higher time constant. Default is zero for compatibility with old setups |
| fw_turn_assist_pitch_gain | 1 | Gain required to keep constant pitch angle during coordinated turns (in TURN_ASSIST mode). Value significantly different from 1.0 indicates a problem with the airspeed calibration (if present) or value of `fw_reference_airspeed` parameter |
| fw_turn_assist_yaw_gain | 1 | Gain required to keep the yaw rate consistent with the turn rate for a coordinated turn (in TURN_ASSIST mode). Value significantly different from 1.0 indicates a problem with the airspeed calibration (if present) or value of `fw_reference_airspeed` parameter |
| fw_yaw_iterm_freeze_bank_angle | 0 | Yaw Iterm is frozen when bank angle is above this threshold [degrees]. This solves the problem of the rudder counteracting turns by partially disabling yaw stabilization when making banked turns. Setting to 0 (the default) disables this feature. Only applies when autopilot is not active and TURN ASSIST is disabled. |
| gps_auto_baud | ON | Automatic configuration of GPS baudrate(The specified baudrate in configured in ports will be used) when used with UBLOX GPS. When used with NAZA/DJI it will automatic detect GPS baudrate and change to it, ignoring the selected baudrate set in ports |
| gps_auto_config | ON | Enable automatic configuration of UBlox GPS receivers. |
| gps_dyn_model | AIR_1G | GPS navigation model: Pedestrian, Air_1g, Air_4g. Default is AIR_1G. Use pedestrian with caution, can cause flyaways with fast flying. |
| gps_min_sats | 6 | Minimum number of GPS satellites in view to acquire GPS_FIX and consider GPS position valid. Some GPS receivers appeared to be very inaccurate with low satellite count. |
| gps_provider | UBLOX | Which GPS protocol to be used, note that UBLOX is 5Hz and UBLOX7 is 10Hz (M8N). |
| gps_sbas_mode | NONE | Which SBAS mode to be used |
| gps_ublox_use_galileo | OFF | Enable use of Galileo satellites. This is at the expense of other regional constellations, so benefit may also be regional. Requires M8N and Ublox firmware 3.x (or later) [OFF/ON]. |
| gyro_dyn_lpf_curve_expo | 5 | Expo value for the throttle-to-frequency mapping for Dynamic LPF |
| gyro_dyn_lpf_max_hz | 500 | Maximum frequency of the gyro Dynamic LPF |
| gyro_dyn_lpf_min_hz | 200 | Minimum frequency of the gyro Dynamic LPF |
| gyro_hardware_lpf | 256HZ | Hardware lowpass filter for gyro. This value should never be changed without a very strong reason! If you have to set gyro lpf below 256HZ, it means the frame is vibrating too much, and that should be fixed first. |
| gyro_lpf_hz | 60 | Software-based filter to remove mechanical vibrations from the gyro signal. Value is cutoff frequency (Hz). For larger frames with bigger props set to lower value. |
| gyro_lpf_type | BIQUAD | Specifies the type of the software LPF of the gyro signals. BIQUAD gives better filtering and more delay, PT1 less filtering and less delay, so use only on clean builds. |
| gyro_notch_cutoff | 1 |  |
| gyro_notch_hz | 0 |  |
| gyro_stage2_lowpass_hz | 0 | Software based second stage lowpass filter for gyro. Value is cutoff frequency (Hz) |
| gyro_stage2_lowpass_type | BIQUAD | Defines the type of stage 2 gyro LPF filter. Possible values: `PT1`, `BIQUAD`. `PT1` offers faster filter response while `BIQUAD` better attenuation. |
| gyro_sync | ON | This option enables gyro_sync feature. In this case the loop will be synced to gyro refresh rate. Loop will always wait for the newest gyro measurement. Maximum gyro refresh rate is determined by gyro_hardware_lpf |
| gyro_to_use | 0 |  |
| gyro_use_dyn_lpf | OFF | Use Dynamic LPF instead of static gyro stage1 LPF. Dynamic Gyro LPF updates gyro LPF based on the throttle position. |
| has_flaps | OFF | Defines is UAV is capable of having flaps. If ON and AIRPLANE `platform_type` is used, **FLAPERON** flight mode will be available for the pilot |
| heading_hold_rate_limit | 90 | This setting limits yaw rotation rate that HEADING_HOLD controller can request from PID inner loop controller. It is independent from manual yaw rate and used only when HEADING_HOLD flight mode is enabled by pilot, RTH or WAYPOINT modes. |
| hott_alarm_sound_interval | 5 | Battery alarm delay in seconds for Hott telemetry |
| i2c_speed | 400KHZ | This setting controls the clock speed of I2C bus. 400KHZ is the default that most setups are able to use. Some noise-free setups may be overclocked to 800KHZ. Some sensor chips or setups with long wires may work unreliably at 400KHZ - user can try lowering the clock speed to 200KHZ or even 100KHZ. User need to bear in mind that lower clock speeds might require higher looptimes (lower looptime rate) |
| ibus_telemetry_type | 0 | Type compatibility ibus telemetry for transmitters. See Telemetry.md label IBUS for details. |
| idle_power | 0 | Power draw at zero throttle used for remaining flight time/distance estimation in 0.01W unit |
| imu2_align_pitch | 0 | Pitch alignment for Secondary IMU. 1/10 of a degree |
| imu2_align_roll | 0 | Roll alignment for Secondary IMU. 1/10 of a degree |
| imu2_align_yaw | 0 | Yaw alignment for Secondary IMU. 1/10 of a degree |
| imu2_gain_acc_x | 0 | Secondary IMU ACC calibration data |
| imu2_gain_acc_y | 0 | Secondary IMU ACC calibration data |
| imu2_gain_acc_z | 0 | Secondary IMU ACC calibration data |
| imu2_gain_mag_x | 0 | Secondary IMU MAG calibration data |
| imu2_gain_mag_y | 0 | Secondary IMU MAG calibration data |
| imu2_gain_mag_z | 0 | Secondary IMU MAG calibration data |
| imu2_hardware | NONE | Selection of a Secondary IMU hardware type. NONE disables this functionality |
| imu2_radius_acc | 0 | Secondary IMU MAG calibration data |
| imu2_radius_mag | 0 | Secondary IMU MAG calibration data |
| imu2_use_for_osd_ahi | OFF | If set to ON, Secondary IMU data will be used for Analog OSD Artificial Horizon |
| imu2_use_for_osd_heading | OFF | If set to ON, Secondary IMU data will be used for Analog OSD heading |
| imu2_use_for_stabilized | OFF | If set to ON, Secondary IMU data will be used for Angle, Horizon and all other modes that control attitude (PosHold, WP, RTH) |
| imu_acc_ignore_rate | 0 | Total gyro rotation rate threshold [deg/s] to consider accelerometer trustworthy on airplanes |
| imu_acc_ignore_slope | 0 | Half-width of the interval to gradually reduce accelerometer weight. Centered at `imu_acc_ignore_rate` (exactly 50% weight) |
| imu_dcm_ki | 50 | Inertial Measurement Unit KI Gain for accelerometer measurements |
| imu_dcm_ki_mag | 0 | Inertial Measurement Unit KI Gain for compass measurements |
| imu_dcm_kp | 2500 | Inertial Measurement Unit KP Gain for accelerometer measurements |
| imu_dcm_kp_mag | 10000 | Inertial Measurement Unit KP Gain for compass measurements |
| inav_allow_dead_reckoning | OFF | Defines if inav will dead-reckon over short GPS outages. May also be useful for indoors OPFLOW navigation |
| inav_auto_mag_decl | ON | Automatic setting of magnetic declination based on GPS position. When used manual magnetic declination is ignored. |
| inav_baro_epv | 100 | Uncertainty value for barometric sensor [cm] |
| inav_gravity_cal_tolerance | 5 | Unarmed gravity calibration tolerance level. Won't finish the calibration until estimated gravity error falls below this value. |
| inav_max_eph_epv | 1000 | Maximum uncertainty value until estimated position is considered valid and is used for navigation [cm] |
| inav_max_surface_altitude | 200 | Max allowed altitude for surface following mode. [cm] |
| inav_reset_altitude | FIRST_ARM | Defines when relative estimated altitude is reset to zero. Variants - `NEVER` (once reference is acquired it's used regardless); `FIRST_ARM` (keep altitude at zero until firstly armed), `EACH_ARM` (altitude is reset to zero on each arming) |
| inav_reset_home | FIRST_ARM | Allows to chose when the home position is reset. Can help prevent resetting home position after accidental mid-air disarm. Possible values are: NEVER, FIRST_ARM and EACH_ARM |
| inav_use_gps_no_baro | OFF |  |
| inav_use_gps_velned | ON | Defined if iNav should use velocity data provided by GPS module for doing position and speed estimation. If set to OFF iNav will fallback to calculating velocity from GPS coordinates. Using native velocity data may improve performance on some GPS modules. Some GPS modules introduce significant delay and using native velocity may actually result in much worse performance. |
| inav_w_acc_bias | 0.01 | Weight for accelerometer drift estimation |
| inav_w_xy_flow_p | 1.0 |  |
| inav_w_xy_flow_v | 2.0 |  |
| inav_w_xy_gps_p | 1.0 | Weight of GPS coordinates in estimated UAV position and speed. |
| inav_w_xy_gps_v | 2.0 | Weight of GPS velocity data in estimated UAV speed |
| inav_w_xy_res_v | 0.5 | Decay coefficient for estimated velocity when GPS reference for position is lost |
| inav_w_xyz_acc_p | 1.0 |  |
| inav_w_z_baro_p | 0.35 | Weight of barometer measurements in estimated altitude and climb rate |
| inav_w_z_gps_p | 0.2 | Weight of GPS altitude measurements in estimated altitude. Setting is used only of airplanes |
| inav_w_z_gps_v | 0.1 | Weight of GPS climb rate measurements in estimated climb rate. Setting is used on both airplanes and multirotors. If GPS doesn't support native climb rate reporting (i.e. NMEA GPS) you may consider setting this to zero |
| inav_w_z_res_v | 0.5 | Decay coefficient for estimated climb rate when baro/GPS reference for altitude is lost |
| inav_w_z_surface_p | 3.5 |  |
| inav_w_z_surface_v | 6.1 |  |
| iterm_windup | 50 | Used to prevent Iterm accumulation on during maneuvers. Iterm will be dampened when motors are reaching it's limit (when requested motor correction range is above percentage specified by this parameter) |
| ledstrip_visual_beeper | OFF |  |
| log_level | ERROR | Defines serial debugging log level. See `docs/development/serial_printf_debugging.md` for usage. |
| log_topics | 0 | Defines serial debugging log topic. See `docs/development/serial_printf_debugging.md` for usage. |
| looptime | 1000 | This is the main loop time (in us). Changing this affects PID effect with some PID controllers (see PID section for details). A very conservative value of 3500us/285Hz should work for everyone. Setting it to zero does not limit loop time, so it will go as fast as possible. |
| ltm_update_rate | NORMAL | Defines the LTM update rate (use of bandwidth [NORMAL/MEDIUM/SLOW]). See Telemetry.md, LTM section for details. |
| mag_calibration_time | 30 | Adjust how long time the Calibration of mag will last. |
| mag_declination | 0 | Current location magnetic declination in format. For example, -6deg 37min = -637 for Japan. Leading zero in ddd not required. Get your local magnetic declination here: http://magnetic-declination.com/ . Not in use if inav_auto_mag_decl is turned on and you acquire valid GPS fix. |
| mag_hardware | AUTO | Selection of mag hardware. See Wiki Sensor auto detect and hardware failure detection for more info |
| mag_to_use | 0 | Allow to chose between built-in and external compass sensor if they are connected to separate buses. Currently only for REVO target |
| maggain_x | 1024 | Magnetometer calibration X gain. If 1024, no calibration or calibration failed |
| maggain_y | 1024 | Magnetometer calibration Y gain. If 1024, no calibration or calibration failed |
| maggain_z | 1024 | Magnetometer calibration Z gain. If 1024, no calibration or calibration failed |
| magzero_x | 0 | Magnetometer calibration X offset. If its 0 none offset has been applied and calibration is failed. |
| magzero_y | 0 | Magnetometer calibration Y offset. If its 0 none offset has been applied and calibration is failed. |
| magzero_z | 0 | Magnetometer calibration Z offset. If its 0 none offset has been applied and calibration is failed. |
| manual_pitch_rate | 100 | Servo travel multiplier for the PITCH axis in `MANUAL` flight mode [0-100]% |
| manual_rc_expo | 70 | Exposition value used for the PITCH/ROLL axes by the `MANUAL` flight mode [0-100] |
| manual_rc_yaw_expo | 20 | Exposition value used for the YAW axis by the `MANUAL` flight mode [0-100] |
| manual_roll_rate | 100 | Servo travel multiplier for the ROLL axis in `MANUAL` flight mode [0-100]% |
| manual_yaw_rate | 100 | Servo travel multiplier for the YAW axis in `MANUAL` flight mode [0-100]% |
| mavlink_ext_status_rate | 2 |  |
| mavlink_extra1_rate | 10 |  |
| mavlink_extra2_rate | 2 |  |
| mavlink_extra3_rate | 1 |  |
| mavlink_pos_rate | 2 |  |
| mavlink_rc_chan_rate | 5 |  |
| mavlink_version | 2 | Version of MAVLink to use |
| max_angle_inclination_pit | 300 | Maximum inclination in level (angle) mode (PITCH axis). 100=10° |
| max_angle_inclination_rll | 300 | Maximum inclination in level (angle) mode (ROLL axis). 100=10° |
| max_check | 1900 | These are min/max values (in us) which, when a channel is smaller (min) or larger (max) than the value will activate various RC commands, such as arming, or stick configuration. Normally, every RC channel should be set so that min = 1000us, max = 2000us. On most transmitters this usually means 125% endpoints. Default check values are 100us above/below this value. |
| max_throttle | 1850 | This is the maximum value (in us) sent to esc when armed. Default of 1850 are OK for everyone (legacy). For modern ESCs, higher values (c. 2000) may be more appropriate. If you have brushed motors, the value should be set to 2000. |
| mc_cd_lpf_hz | 30 | Cutoff frequency for Control Derivative. Lower value smoother reaction on fast stick movements. With higher values, response will be more aggressive, jerky |
| mc_cd_pitch | 60 | Multicopter Control Derivative gain for PITCH |
| mc_cd_roll | 60 | Multicopter Control Derivative gain for ROLL |
| mc_cd_yaw | 60 | Multicopter Control Derivative gain for YAW |
| mc_d_level | 75 | Multicopter attitude stabilisation HORIZON transition point |
| mc_d_pitch | 23 | Multicopter rate stabilisation D-gain for PITCH |
| mc_d_roll | 23 | Multicopter rate stabilisation D-gain for ROLL |
| mc_d_yaw | 0 | Multicopter rate stabilisation D-gain for YAW |
| mc_i_level | 15 | Multicopter attitude stabilisation low-pass filter cutoff |
| mc_i_pitch | 30 | Multicopter rate stabilisation I-gain for PITCH |
| mc_i_roll | 30 | Multicopter rate stabilisation I-gain for ROLL |
| mc_i_yaw | 45 | Multicopter rate stabilisation I-gain for YAW |
| mc_iterm_relax | RP |  |
| mc_iterm_relax_cutoff | 15 |  |
| mc_p_level | 20 | Multicopter attitude stabilisation P-gain |
| mc_p_pitch | 40 | Multicopter rate stabilisation P-gain for PITCH |
| mc_p_roll | 40 | Multicopter rate stabilisation P-gain for ROLL |
| mc_p_yaw | 85 | Multicopter rate stabilisation P-gain for YAW |
| min_check | 1100 | These are min/max values (in us) which, when a channel is smaller (min) or larger (max) than the value will activate various RC commands, such as arming, or stick configuration. Normally, every RC channel should be set so that min = 1000us, max = 2000us. On most transmitters this usually means 125% endpoints. Default check values are 100us above/below this value. |
| min_command | 1000 | This is the PWM value sent to ESCs when they are not armed. If ESCs beep slowly when powered up, try decreasing this value. It can also be used for calibrating all ESCs at once. |
| mode_range_logic_operator | OR | Control how Mode selection works in flight modes. If you example have Angle mode configured on two different Aux channels, this controls if you need both activated ( AND ) or if you only need one activated ( OR ) to active angle mode. |
| model_preview_type | -1 | ID of mixer preset applied in a Configurator. **Do not modify manually**. Used only for backup/restore reasons. |
| moron_threshold | 32 | When powering up, gyro bias is calculated. If the model is shaking/moving during this initial calibration, offsets are calculated incorrectly, and could lead to poor flying performance. This threshold means how much average gyro reading could differ before re-calibration is triggered. |
| motor_accel_time | 0 | Minimum time for the motor(s) to accelerate from 0 to 100% throttle (ms) [0-1000] |
| motor_decel_time | 0 | Minimum time for the motor(s) to deccelerate from 100 to 0% throttle (ms) [0-1000] |
| motor_direction_inverted | OFF | Use if you need to inverse yaw motor direction. |
| motor_poles | 14 | The number of motor poles. Required to compute motor RPM |
| motor_pwm_protocol | ONESHOT125 | Protocol that is used to send motor updates to ESCs. Possible values - STANDARD, ONESHOT125, ONESHOT42, MULTISHOT, DSHOT150, DSHOT300, DSHOT600, DSHOT1200, BRUSHED |
| motor_pwm_rate | 400 | Output frequency (in Hz) for motor pins. Default is 400Hz for motor with motor_pwm_protocol set to STANDARD. For *SHOT (e.g. ONESHOT125) values of 1000 and 2000 have been tested by the development team and are supported. It may be possible to use higher values. For BRUSHED values of 8000 and above should be used. Setting to 8000 will use brushed mode at 8kHz switching frequency. Up to 32kHz is supported for brushed. Default is 16000 for boards with brushed motors. Note, that in brushed mode, minthrottle is offset to zero. For brushed mode, set max_throttle to 2000. |
| msp_override_channels | 0 | Mask of RX channels that may be overridden by MSP `SET_RAW_RC`. Note that this requires custom firmware with `USE_RX_MSP` and `USE_MSP_RC_OVERRIDE` compile options and the `MSP RC Override` flight mode. |
| name | _empty_ | Craft name |
| nav_auto_climb_rate | 500 | Maximum climb/descent rate that UAV is allowed to reach during navigation modes. [cm/s] |
| nav_auto_speed | 300 | Maximum velocity firmware is allowed in full auto modes (RTH, WP) [cm/s] [Multirotor only] |
| nav_disarm_on_landing | OFF | If set to ON, iNav disarms the FC after landing |
| nav_emerg_landing_speed | 500 | Rate of descent UAV will try to maintain when doing emergency descent sequence [cm/s] |
| nav_extra_arming_safety | ON | If set to ON drone won't arm if no GPS fix and any navigation mode like RTH or POSHOLD is configured. ALLOW_BYPASS allows the user to momentarily disable this check by holding yaw high (left stick held at the bottom right in mode 2) when switch arming is used |
| nav_fw_allow_manual_thr_increase | OFF | Enable the possibility to manually increase the throttle in auto throttle controlled modes for fixed wing |
| nav_fw_bank_angle | 35 | Max roll angle when rolling / turning in GPS assisted modes, is also restrained by global max_angle_inclination_rll |
| nav_fw_climb_angle | 20 | Max pitch angle when climbing in GPS assisted modes, is also restrained by global max_angle_inclination_pit |
| nav_fw_control_smoothness | 0 | How smoothly the autopilot controls the airplane to correct the navigation error |
| nav_fw_cruise_speed | 0 | Speed for the plane/wing at cruise throttle used for remaining flight time/distance estimation in cm/s |
| nav_fw_cruise_thr | 1400 | Cruise throttle in GPS assisted modes, this includes RTH. Should be set high enough to avoid stalling. This values gives INAV a base for throttle when flying straight, and it will increase or decrease throttle based on pitch of airplane and the parameters below. In addition it will increase throttle if GPS speed gets below 7m/s ( hardcoded ) |
| nav_fw_cruise_yaw_rate | 20 | Max YAW rate when NAV CRUISE mode is enabled (0=disable control via yaw stick) [dps] |
| nav_fw_dive_angle | 15 | Max negative pitch angle when diving in GPS assisted modes, is also restrained by global max_angle_inclination_pit |
| nav_fw_heading_p | 60 | P gain of Heading Hold controller (Fixedwing) |
| nav_fw_land_dive_angle | 2 | Dive angle that airplane will use during final landing phase. During dive phase, motor is stopped or IDLE and roll control is locked to 0 degrees |
| nav_fw_launch_accel | 1863 | Forward acceleration threshold for bungee launch of throw launch [cm/s/s], 1G = 981 cm/s/s |
| nav_fw_launch_climb_angle | 18 | Climb angle for launch sequence (degrees), is also restrained by global max_angle_inclination_pit |
| nav_fw_launch_detect_time | 40 | Time for which thresholds have to breached to consider launch happened [ms] |
| nav_fw_launch_end_time | 3000 | Time for the transition of throttle and pitch angle, between the launch state and the subsequent flight mode [ms] |
| nav_fw_launch_idle_thr | 1000 | Launch idle throttle - throttle to be set before launch sequence is initiated. If set below minimum throttle it will force motor stop or at idle throttle (depending if the MOTOR_STOP is enabled). If set above minimum throttle it will force throttle to this value (if MOTOR_STOP is enabled it will be handled according to throttle stick position) |
| nav_fw_launch_max_altitude | 0 | Altitude (centimeters) at which LAUNCH mode will be turned off and regular flight mode will take over [0-60000]. |
| nav_fw_launch_max_angle | 45 | Max tilt angle (pitch/roll combined) to consider launch successful. Set to 180 to disable completely [deg] |
| nav_fw_launch_min_time | 0 | Allow launch mode to execute at least this time (ms) and ignore stick movements [0-60000]. |
| nav_fw_launch_motor_delay | 500 | Delay between detected launch and launch sequence start and throttling up (ms) |
| nav_fw_launch_spinup_time | 100 | Time to bring power from minimum throttle to nav_fw_launch_thr - to avoid big stress on ESC and large torque from propeller |
| nav_fw_launch_thr | 1700 | Launch throttle - throttle to be set during launch sequence (pwm units) |
| nav_fw_launch_timeout | 5000 | Maximum time for launch sequence to be executed. After this time LAUNCH mode will be turned off and regular flight mode will take over (ms) |
| nav_fw_launch_velocity | 300 | Forward velocity threshold for swing-launch detection [cm/s] |
| nav_fw_loiter_radius | 7500 | PosHold radius. 3000 to 7500 is a good value (30-75m) [cm] |
| nav_fw_max_thr | 1700 | Maximum throttle for flying wing in GPS assisted modes |
| nav_fw_min_thr | 1200 | Minimum throttle for flying wing in GPS assisted modes |
| nav_fw_pitch2thr | 10 | Amount of throttle applied related to pitch attitude in GPS assisted modes. Throttle = nav_fw_cruise_throttle - (nav_fw_pitch2thr * pitch_angle). (notice that pitch_angle is in degrees and is negative when climbing and positive when diving, and throttle value is constrained between nav_fw_min_thr and nav_fw_max_thr) |
| nav_fw_pitch2thr_smoothing | 6 | How smoothly the autopilot makes pitch to throttle correction inside a deadband defined by pitch_to_throttle_thresh. |
| nav_fw_pitch2thr_threshold | 50 | Threshold from average pitch where momentary pitch_to_throttle correction kicks in. [decidegrees] |
| nav_fw_pos_hdg_d | 0 | D gain of heading trajectory PID controller. (Fixedwing, rovers, boats) |
| nav_fw_pos_hdg_i | 2 | I gain of heading trajectory PID controller. (Fixedwing, rovers, boats) |
| nav_fw_pos_hdg_p | 30 | P gain of heading PID controller. (Fixedwing, rovers, boats) |
| nav_fw_pos_hdg_pidsum_limit | 350 | Output limit for heading trajectory PID controller. (Fixedwing, rovers, boats) |
| nav_fw_pos_xy_d | 8 | D gain of 2D trajectory PID controller. Too high and there will be overshoot in trajectory. Better start tuning with zero |
| nav_fw_pos_xy_i | 5 | I gain of 2D trajectory PID controller. Too high and there will be overshoot in trajectory. Better start tuning with zero |
| nav_fw_pos_xy_p | 75 | P gain of 2D trajectory PID controller. Play with this to get a straight line between waypoints or a straight RTH |
| nav_fw_pos_z_d | 10 | D gain of altitude PID controller (Fixedwing) |
| nav_fw_pos_z_i | 5 | I gain of altitude PID controller (Fixedwing) |
| nav_fw_pos_z_p | 40 | P gain of altitude PID controller (Fixedwing) |
| nav_fw_yaw_deadband | 0 | Deadband for heading trajectory PID controller. When heading error is below the deadband, controller assumes that vehicle is on course |
| nav_land_slowdown_maxalt | 2000 | Defines at what altitude the descent velocity should start to ramp down from 100% nav_landing_speed to 25% nav_landing_speed. [cm] |
| nav_land_slowdown_minalt | 500 | Defines at what altitude the descent velocity should start to be 25% of nav_landing_speed [cm] |
| nav_landing_speed | 200 | Vertical descent velocity during the RTH landing phase. [cm/s] |
| nav_manual_climb_rate | 200 | Maximum climb/descent rate firmware is allowed when processing pilot input for ALTHOLD control mode [cm/s] |
| nav_manual_speed | 500 | Maximum velocity firmware is allowed when processing pilot input for POSHOLD/CRUISE control mode [cm/s] [Multirotor only] |
| nav_max_terrain_follow_alt | 100 | Max allowed above the ground altitude for terrain following mode |
| nav_mc_auto_disarm_delay | 2000 | Delay before multi-rotor disarms when `nav_disarm_on_landing` is set (m/s) |
| nav_mc_bank_angle | 30 | Maximum banking angle (deg) that multicopter navigation is allowed to set. Machine must be able to satisfy this angle without loosing altitude |
| nav_mc_braking_bank_angle | 40 | max angle that MR is allowed to bank in BOOST mode |
| nav_mc_braking_boost_disengage_speed | 100 | BOOST will be disabled when speed goes below this value |
| nav_mc_braking_boost_factor | 100 | acceleration factor for BOOST phase |
| nav_mc_braking_boost_speed_threshold | 150 | BOOST can be enabled when speed is above this value |
| nav_mc_braking_boost_timeout | 750 | how long in ms BOOST phase can happen |
| nav_mc_braking_disengage_speed | 75 | braking is disabled when speed goes below this value |
| nav_mc_braking_speed_threshold | 100 | min speed in cm/s above which braking can happen |
| nav_mc_braking_timeout | 2000 | timeout in ms for braking |
| nav_mc_heading_p | 60 | P gain of Heading Hold controller (Multirotor) |
| nav_mc_hover_thr | 1500 | Multicopter hover throttle hint for altitude controller. Should be set to approximate throttle value when drone is hovering. |
| nav_mc_pos_deceleration_time | 120 | Used for stoping distance calculation. Stop position is computed as _speed_ * _nav_mc_pos_deceleration_time_ from the place where sticks are released. Braking mode overrides this setting |
| nav_mc_pos_expo | 10 | Expo for PosHold control |
| nav_mc_pos_xy_p | 65 | Controls how fast the drone will fly towards the target position. This is a multiplier to convert displacement to target velocity |
| nav_mc_pos_z_p | 50 | P gain of altitude PID controller (Multirotor) |
| nav_mc_vel_xy_d | 100 | D gain of Position-Rate (Velocity to Acceleration) PID controller. It can damp P and I. Increasing D might help when drone overshoots target. |
| nav_mc_vel_xy_dterm_attenuation | 90 | Maximum D-term attenution percentage for horizontal velocity PID controller (Multirotor). It allows to smooth the PosHold CRUISE, WP and RTH when Multirotor is traveling at full speed. Dterm is not attenuated at low speeds, breaking and accelerating. |
| nav_mc_vel_xy_dterm_attenuation_end | 60 | A point (in percent of both target and current horizontal velocity) where nav_mc_vel_xy_dterm_attenuation reaches maximum |
| nav_mc_vel_xy_dterm_attenuation_start | 10 | A point (in percent of both target and current horizontal velocity) where nav_mc_vel_xy_dterm_attenuation begins |
| nav_mc_vel_xy_dterm_lpf_hz | 2 |  |
| nav_mc_vel_xy_ff | 40 |  |
| nav_mc_vel_xy_i | 15 | I gain of Position-Rate (Velocity to Acceleration) PID controller. Used for drift compensation (caused by wind for example). Higher I means stronger response to drift. Too much I gain might cause target overshot |
| nav_mc_vel_xy_p | 40 | P gain of Position-Rate (Velocity to Acceleration) PID controller. Higher P means stronger response when position error occurs. Too much P might cause "nervous" behavior and oscillations |
| nav_mc_vel_z_d | 10 | D gain of velocity PID controller |
| nav_mc_vel_z_i | 50 | I gain of velocity PID controller |
| nav_mc_vel_z_p | 100 | P gain of velocity PID controller |
| nav_mc_wp_slowdown | ON | When ON, NAV engine will slow down when switching to the next waypoint. This prioritizes turning over forward movement. When OFF, NAV engine will continue to the next waypoint and turn as it goes. |
| nav_min_rth_distance | 500 | Minimum distance from homepoint when RTH full procedure will be activated [cm]. Below this distance, the mode will activate at the current location and the final phase is executed (loiter / land). Above this distance, the full procedure is activated, which may include initial climb and flying directly to the homepoint before entering the loiter / land phase. |
| nav_overrides_motor_stop | ALL_NAV | When set to OFF the navigation system will not take over the control of the motor if the throttle is low (motor will stop). When set to OFF_ALWAYS the navigation system will not take over the control of the motor if the throttle was low even when failsafe is triggered. When set to AUTO_ONLY the navigation system will only take over the control of the throttle in autonomous navigation modes (NAV WP and NAV RTH). When set to ALL_NAV (default) the navigation system will take over the control of the motor completely and never allow the motor to stop even when the throttle is low. This setting only has an effect on NAV modes which take control of the throttle when combined with MOTOR_STOP and is likely to cause a stall if fw_min_throttle_down_pitch isn't set correctly or the pitch estimation is wrong for fixed wing models when not set to ALL_NAV |
| nav_position_timeout | 5 | If GPS fails wait for this much seconds before switching to emergency landing mode (0 - disable) |
| nav_rth_abort_threshold | 50000 | RTH sanity checking feature will notice if distance to home is increasing during RTH and once amount of increase exceeds the threshold defined by this parameter, instead of continuing RTH machine will enter emergency landing, self-level and go down safely. Default is 500m which is safe enough for both multirotor machines and airplanes. [cm] |
| nav_rth_allow_landing | ALWAYS | If set to ON drone will land as a last phase of RTH. |
| nav_rth_alt_mode | AT_LEAST | Configure how the aircraft will manage altitude on the way home, see Navigation modes on wiki for more details |
| nav_rth_altitude | 1000 | Used in EXTRA, FIXED and AT_LEAST rth alt modes [cm] (Default 1000 means 10 meters) |
| nav_rth_climb_first | ON | If set to ON or ON_FW_SPIRAL aircraft will climb to nav_rth_altitude first before turning to head home. If set to OFF aircraft will turn and head home immediately climbing on the way. For a fixed wing ON will use a linear climb, ON_FW_SPIRAL will use a loiter turning climb with climb rate set by nav_auto_climb_rate, turn rate set by nav_fw_loiter_radius (ON_FW_SPIRAL is a fixed wing setting and behaves the same as ON for a multirotor) |
| nav_rth_climb_ignore_emerg | OFF | If set to ON, aircraft will execute initial climb regardless of position sensor (GPS) status. |
| nav_rth_home_altitude | 0 | Aircraft will climb/descend to this altitude after reaching home if landing is not enabled. Set to 0 to stay at `nav_rth_altitude` (default) [cm] |
| nav_rth_tail_first | OFF | If set to ON drone will return tail-first. Obviously meaningless for airplanes. |
| nav_use_fw_yaw_control | OFF | Enables or Disables the use of the heading PID controller on fixed wing. Heading PID controller is always enabled for rovers and boats |
| nav_use_midthr_for_althold | OFF | If set to OFF, the FC remembers your throttle stick position when enabling ALTHOLD and treats it as a neutral midpoint for holding altitude |
| nav_user_control_mode | ATTI | Defines how Pitch/Roll input from RC receiver affects flight in POSHOLD mode: ATTI - pitch/roll controls attitude like in ANGLE mode; CRUISE - pitch/roll controls velocity in forward and right direction. |
| nav_wp_radius | 100 | Waypoint radius [cm]. Waypoint would be considered reached if machine is within this radius |
| nav_wp_safe_distance | 10000 | First waypoint in the mission should be closer than this value [cm]. A value of 0 disables this check. |
| opflow_hardware | NONE | Selection of OPFLOW hardware. |
| opflow_scale | 10.5 |  |
| osd_ahi_bordered | OFF | Shows a border/corners around the AHI region (pixel OSD only) |
| osd_ahi_height | 162 | AHI height in pixels (pixel OSD only) |
| osd_ahi_max_pitch | 20 | Max pitch, in degrees, for OSD artificial horizon |
| osd_ahi_reverse_roll | OFF |  |
| osd_ahi_style | DEFAULT | Sets OSD Artificial Horizon style "DEFAULT" or "LINE" for the FrSky Graphical OSD. |
| osd_ahi_vertical_offset | -18 | AHI vertical offset from center (pixel OSD only) |
| osd_ahi_width | 132 | AHI width in pixels (pixel OSD only) |
| osd_alt_alarm | 100 | Value above which to make the OSD relative altitude indicator blink (meters) |
| osd_baro_temp_alarm_max | 600 | Temperature above which the baro temperature OSD element will start blinking (decidegrees centigrade) |
| osd_baro_temp_alarm_min | -200 | Temperature under which the baro temperature OSD element will start blinking (decidegrees centigrade) |
| osd_camera_fov_h | 135 | Horizontal field of view for the camera in degres |
| osd_camera_fov_v | 85 | Vertical field of view for the camera in degres |
| osd_camera_uptilt | 0 | Set the camera uptilt for the FPV camera in degres, positive is up, negative is down, relative to the horizontal |
| osd_coordinate_digits | 9 |  |
| osd_crosshairs_style | DEFAULT | To set the visual type for the crosshair |
| osd_crsf_lq_format | TYPE1 | To select LQ format |
| osd_current_alarm | 0 | Value above which the OSD current consumption element will start blinking. Measured in full Amperes. |
| osd_dist_alarm | 1000 | Value above which to make the OSD distance from home indicator blink (meters) |
| osd_esc_temp_alarm_max | 900 | Temperature above which the IMU temperature OSD element will start blinking (decidegrees centigrade) |
| osd_esc_temp_alarm_min | -200 | Temperature under which the IMU temperature OSD element will start blinking (decidegrees centigrade) |
| osd_estimations_wind_compensation | ON | Use wind estimation for remaining flight time/distance estimation |
| osd_failsafe_switch_layout | OFF | If enabled the OSD automatically switches to the first layout during failsafe |
| osd_force_grid | OFF | Force OSD to work in grid mode even if the OSD device supports pixel level access (mainly used for development) |
| osd_gforce_alarm | 5 | Value above which the OSD g force indicator will blink (g) |
| osd_gforce_axis_alarm_max | 5 | Value above which the OSD axis g force indicators will blink (g) |
| osd_gforce_axis_alarm_min | -5 | Value under which the OSD axis g force indicators will blink (g) |
| osd_home_position_arm_screen | ON | Should home position coordinates be displayed on the arming screen. |
| osd_horizon_offset | 0 | To vertically adjust the whole OSD and AHI and scrolling bars |
| osd_hud_homepoint | OFF | To 3D-display the home point location in the hud |
| osd_hud_homing | OFF | To display little arrows around the crossair showing where the home point is in the hud |
| osd_hud_margin_h | 3 | Left and right margins for the hud area |
| osd_hud_margin_v | 3 | Top and bottom margins for the hud area |
| osd_hud_radar_disp | 0 | Maximum count of nearby aircrafts or points of interest to display in the hud, as sent from an ESP32 LoRa module. Set to 0 to disable (show nothing). The nearby aircrafts will appear as markers A, B, C, etc |
| osd_hud_radar_nearest | 0 | To display an extra bar of informations at the bottom of the hud area for the closest radar aircraft found, if closest than the set value, in meters. Shows relative altitude (meters or feet, with an up or down arrow to indicate if above or below), speed (in m/s or f/s), and absolute heading (in °, 0 is north, 90 is east, 180 is south, 270 is west). Set to 0 (zero) to disable. |
| osd_hud_radar_range_max | 4000 | In meters, radar aircrafts further away than this will not be displayed in the hud |
| osd_hud_radar_range_min | 3 | In meters, radar aircrafts closer than this will not be displayed in the hud |
| osd_hud_wp_disp | 0 | How many navigation waypoints are displayed, set to 0 (zero) to disable. As sample, if set to 2, and you just passed the 3rd waypoint of the mission, you'll see markers for the 4th waypoint (marked 1) and the 5th waypoint (marked 2) |
| osd_imu_temp_alarm_max | 600 | Temperature above which the IMU temperature OSD element will start blinking (decidegrees centigrade) |
| osd_imu_temp_alarm_min | -200 | Temperature under which the IMU temperature OSD element will start blinking (decidegrees centigrade) |
| osd_left_sidebar_scroll | NONE |  |
| osd_left_sidebar_scroll_step | 0 | How many units each sidebar step represents. 0 means the default value for the scroll type. |
| osd_link_quality_alarm | 70 | LQ % indicator blinks below this value. For Crossfire use 70%, for Tracer use 50% |
| osd_main_voltage_decimals | 1 | Number of decimals for the battery voltages displayed in the OSD [1-2]. |
| osd_neg_alt_alarm | 5 | Value below which (negative altitude) to make the OSD relative altitude indicator blink (meters) |
| osd_pan_servo_index | 0 | Index of the pan servo to adjust osd home heading direction based on camera pan. Note that this feature does not work with continiously rotating servos. |
| osd_pan_servo_pwm2centideg | 0 | Centidegrees of pan servo rotation us PWM signal. A servo with 180 degrees of rotation from 1000 to 2000 us PWM typically needs `18` for this setting. Change sign to inverse direction. |
| osd_plus_code_digits | 11 | Numer of plus code digits before shortening with `osd_plus_code_short`. Precision at the equator: 10=13.9x13.9m; 11=2.8x3.5m; 12=56x87cm; 13=11x22cm. |
| osd_plus_code_short | 0 | Number of leading digits removed from plus code. Removing 2, 4 and 6 digits requires a reference location within, respectively, ~800km, ~40 km and ~2km to recover the original coordinates. |
| osd_right_sidebar_scroll | NONE |  |
| osd_right_sidebar_scroll_step | 0 | Same as left_sidebar_scroll_step, but for the right sidebar |
| osd_row_shiftdown | 0 | Number of rows to shift the OSD display (increase if top rows are cut off) |
| osd_rssi_alarm | 20 | Value below which to make the OSD RSSI indicator blink |
| osd_sidebar_horizontal_offset | 0 | Sidebar horizontal offset from default position. Positive values move the sidebars closer to the edges. |
| osd_sidebar_scroll_arrows | OFF |  |
| osd_snr_alarm | 4 | Value below which Crossfire SNR Alarm pops-up. (dB) |
| osd_stats_energy_unit | MAH | Unit used for the drawn energy in the OSD stats [MAH/WH] (milliAmpere hour/ Watt hour) |
| osd_temp_label_align | LEFT | Allows to chose between left and right alignment for the OSD temperature sensor labels. Valid values are `LEFT` and `RIGHT` |
| osd_time_alarm | 10 | Value above which to make the OSD flight time indicator blink (minutes) |
| osd_units | METRIC | IMPERIAL, METRIC, UK |
| osd_video_system | AUTO | Video system used. Possible values are `AUTO`, `PAL` and `NTSC` |
| pid_type | AUTO | Allows to set type of PID controller used in control loop. Possible values: `NONE`, `PID`, `PIFF`, `AUTO`. Change only in case of experimental platforms like VTOL, tailsitters, rovers, boats, etc. Airplanes should always use `PIFF` and multirotors `PID` |
| pidsum_limit | 500 | A limitation to overall amount of correction Flight PID can request on each axis (Roll/Pitch). If when doing a hard maneuver on one axis machine looses orientation on other axis - reducing this parameter may help |
| pidsum_limit_yaw | 350 | A limitation to overall amount of correction Flight PID can request on each axis (Yaw). If when doing a hard maneuver on one axis machine looses orientation on other axis - reducing this parameter may help |
| pinio_box1 | `BOX_PERMANENT_ID_NONE` | Mode assignment for PINIO#1 |
| pinio_box2 | `BOX_PERMANENT_ID_NONE` | Mode assignment for PINIO#1 |
| pinio_box3 | `BOX_PERMANENT_ID_NONE` | Mode assignment for PINIO#1 |
| pinio_box4 | `BOX_PERMANENT_ID_NONE` | Mode assignment for PINIO#1 |
| pitch_rate | 20 | Defines rotation rate on PITCH axis that UAV will try to archive on max. stick deflection. Rates are defined in tens of degrees (deca-degrees) per second [rate = dps/10]. That means, rate 20 represents 200dps rotation speed. Default 20 (200dps) is more less equivalent of old Cleanflight/Baseflight rate 0. Max. 180 (1800dps) is what gyro can measure. |
| pitot_hardware | NONE | Selection of pitot hardware. |
| pitot_lpf_milli_hz | 350 |  |
| pitot_scale | 1.0 |  |
| platform_type | MULTIROTOR | Defines UAV platform type. Allowed values: "MULTIROTOR", "AIRPLANE", "HELICOPTER", "TRICOPTER", "ROVER", "BOAT". Currently only MULTIROTOR, AIRPLANE and TRICOPTER types are implemented |
| pos_hold_deadband | 10 | Stick deadband in [r/c points], applied after r/c deadband and expo |
| prearm_timeout | 10000 | Duration (ms) for which Prearm being activated is valid. after this, Prearm needs to be reset. 0 means Prearm does not timeout. |
| rangefinder_hardware | NONE | Selection of rangefinder hardware. |
| rangefinder_median_filter | OFF | 3-point median filtering for rangefinder readouts |
| rate_accel_limit_roll_pitch | 0 | Limits acceleration of ROLL/PITCH rotation speed that can be requested by stick input. In degrees-per-second-squared. Small and powerful UAV flies great with high acceleration limit ( > 5000 dps^2 and even > 10000 dps^2). Big and heavy multirotors will benefit from low acceleration limit (~ 360 dps^2). When set correctly, it greatly improves stopping performance. Value of 0 disables limiting. |
| rate_accel_limit_yaw | 10000 | Limits acceleration of YAW rotation speed that can be requested by stick input. In degrees-per-second-squared. Small and powerful UAV flies great with high acceleration limit ( > 10000 dps^2). Big and heavy multirotors will benefit from low acceleration limit (~ 180 dps^2). When set correctly, it greatly improves stopping performance and general stability during yaw turns. Value of 0 disables limiting. |
| rc_expo | 70 | Exposition value used for the PITCH/ROLL axes by all the stabilized flights modes (all but `MANUAL`) |
| rc_filter_frequency | 50 | RC data biquad filter cutoff frequency. Lower cutoff frequencies result in smoother response at expense of command control delay. Practical values are 20-50. Set to zero to disable entirely and use unsmoothed RC stick values |
| rc_yaw_expo | 20 | Exposition value used for the YAW axis by all the stabilized flights modes (all but `MANUAL`) |
| reboot_character | 82 | Special character used to trigger reboot |
| receiver_type | _target default_ | Selection of receiver (RX) type. Additional configuration of a `serialrx_provider` and a UART will be needed for `SERIAL` |
| report_cell_voltage | OFF | S.Port, D-Series, and IBUS telemetry: Send the average cell voltage if set to ON |
| roll_rate | 20 | Defines rotation rate on ROLL axis that UAV will try to archive on max. stick deflection. Rates are defined in tens of degrees (deca-degrees) per second [rate = dps/10]. That means, rate 20 represents 200dps rotation speed. Default 20 (200dps) is more less equivalent of old Cleanflight/Baseflight rate 0. Max. 180 (1800dps) is what gyro can measure. |
| rpm_gyro_filter_enabled | OFF | Enables gyro RPM filtere. Set to `ON` only when ESC telemetry is working and rotation speed of the motors is correctly reported to INAV |
| rpm_gyro_harmonics | 1 | Number of harmonic frequences to be covered by gyro RPM filter. Default value of `1` usually works just fine |
| rpm_gyro_min_hz | 100 | The lowest frequency for gyro RPM filtere. Default `150` is fine for 5" mini-quads. On 7-inch drones you can lower even down to `60`-`70` |
| rpm_gyro_q | 500 | Q factor for gyro RPM filter. Lower values give softer, wider attenuation. Usually there is no need to change this setting |
| rssi_adc_channel | _target default_ | ADC channel to use for analog RSSI input. Defaults to board RSSI input (if available). 0 = disabled |
| rssi_channel | 0 | RX channel containing the RSSI signal |
| rssi_max | 100 | The maximum RSSI value sent by the receiver, in %. For example, if your receiver's maximum RSSI value shows as 83% in the configurator/OSD set this parameter to 83. See also rssi_min. |
| rssi_min | 0 | The minimum RSSI value sent by the receiver, in %. For example, if your receiver's minimum RSSI value shows as 42% in the configurator/OSD set this parameter to 42. See also rssi_max. Note that rssi_min can be set to a value bigger than rssi_max to invert the RSSI calculation (i.e. bigger values mean lower RSSI). |
| rssi_source | AUTO | Source of RSSI input. Possible values: `NONE`, `AUTO`, `ADC`, `CHANNEL`, `PROTOCOL`, `MSP` |
| rth_energy_margin | 5 | Energy margin wanted after getting home (percent of battery energy capacity). Use for the remaining flight time/distance calculation |
| rx_max_usec | 2115 | Defines the longest pulse width value used when ensuring the channel value is valid. If the receiver gives a pulse value higher than this value then the channel will be marked as bad and will default to the value of mid_rc. |
| rx_min_usec | 885 | Defines the shortest pulse width value used when ensuring the channel value is valid. If the receiver gives a pulse value lower than this value then the channel will be marked as bad and will default to the value of mid_rc. |
| rx_spi_id | 0 |  |
| rx_spi_protocol | _target default_ |  |
| rx_spi_rf_channel_count | 0 |  |
| safehome_max_distance | 20000 | In order for a safehome to be used, it must be less than this distance (in cm) from the arming point. |
| sbus_sync_interval | 3000 |  |
| sdcard_detect_inverted | _target default_ | This setting drives the way SD card is detected in card slot. On some targets (AnyFC F7 clone) different card slot was used and depending of hardware revision ON or OFF setting might be required. If card is not detected, change this value. |
| serialrx_halfduplex | AUTO | Allow serial receiver to operate on UART TX pin. With some receivers will allow control and telemetry over a single wire. |
| serialrx_inverted | OFF | Reverse the serial inversion of the serial RX protocol. When this value is OFF, each protocol will use its default signal (e.g. SBUS will use an inverted signal). Some OpenLRS receivers produce a non-inverted SBUS signal. This setting supports this type of receivers (including modified FrSKY). |
| serialrx_provider | _target default_ | When feature SERIALRX is enabled, this allows connection to several receivers which output data via digital interface resembling serial. See RX section. |
| servo_center_pulse | 1500 | Servo midpoint |
| servo_lpf_hz | 20 | Selects the servo PWM output cutoff frequency. Value is in [Hz] |
| servo_protocol | PWM | An option to chose the protocol/option that would be used to output servo data. Possible options `PWM` (FC servo outputs), `SERVO_DRIVER` (I2C PCA9685 peripheral), `SBUS` (S.Bus protocol output via a configured serial port) |
| servo_pwm_rate | 50 | Output frequency (in Hz) servo pins. When using tricopters or gimbal with digital servo, this rate can be increased. Max of 498Hz (for 500Hz pwm period), and min of 50Hz. Most digital servos will support for example 330Hz. |
| setpoint_kalman_enabled | OFF | Enable Kalman filter on the PID controller setpoint |
| setpoint_kalman_q | 100 | Quality factor of the setpoint Kalman filter. Higher values means less filtering and lower phase delay. On 3-7 inch multirotors can be usually increased to 200-300 or even higher of clean builds |
| setpoint_kalman_sharpness | 100 | Dynamic factor for the setpoint Kalman filter. In general, the higher the value, the more dynamic Kalman filter gets |
| setpoint_kalman_w | 4 | Window size for the setpoint Kalman filter. Wider the window, more samples are used to compute variance. In general, wider window results in smoother filter response |
| sim_ground_station_number | _empty_ | Number of phone that is used to communicate with SIM module. Messages / calls from other numbers are ignored. If undefined, can be set by calling or sending a message to the module. |
| sim_low_altitude | -32767 | Threshold for low altitude warning messages sent by SIM module when the 'L' transmit flag is set in `sim_transmit_flags`. |
| sim_pin | 0000 | PIN code for the SIM module |
| sim_transmit_flags | `SIM_TX_FLAG_FAILSAFE` | Bitmask specifying text message transmit condition flags for the SIM module. 1: continuous transmission, 2: continuous transmission in failsafe mode, 4: continuous transmission when GPS signal quality is low, 8: acceleration events, 16: continuous transmission when altitude is below `sim_low_altitude` |
| sim_transmit_interval | 60 | Text message transmission interval in seconds for SIM module. Minimum value: 10 |
| small_angle | 25 | If the aircraft tilt angle exceed this value the copter will refuse to arm. |
| smartport_fuel_unit | MAH | S.Port telemetry only: Unit of the value sent with the `FUEL` ID (FrSky D-Series always sends percent). [PERCENT/MAH/MWH] |
| smartport_master_halfduplex | ON |  |
| smartport_master_inverted | OFF |  |
| spektrum_sat_bind | `SPEKTRUM_SAT_BIND_DISABLED` | 0 = disabled. Used to bind the spektrum satellite to RX |
| srxl2_baud_fast | ON |  |
| srxl2_unit_id | 1 |  |
| stats | OFF | General switch of the statistics recording feature (a.k.a. odometer) |
| stats_total_dist | 0 | Total flight distance [in meters]. The value is updated on every disarm when "stats" are enabled. |
| stats_total_energy | 0 |  |
| stats_total_time | 0 | Total flight time [in seconds]. The value is updated on every disarm when "stats" are enabled. |
| switch_disarm_delay | 250 | Delay before disarming when requested by switch (ms) [0-1000] |
| telemetry_halfduplex | ON | S.Port telemetry only: Turn UART into UNIDIR for usage on F1 and F4 target. See Telemetry.md for details |
| telemetry_inverted | OFF | Determines if the telemetry protocol default signal inversion is reversed. This should be OFF in most cases unless a custom or hacked RX is used. |
| telemetry_switch | OFF | Which aux channel to use to change serial output & baud rate (MSP / Telemetry). It disables automatic switching to Telemetry when armed. |
| thr_comp_weight | 1 | Weight used for the throttle compensation based on battery voltage. See the [battery documentation](Battery.md#automatic-throttle-compensation-based-on-battery-voltage) |
| thr_expo | 0 | Throttle exposition value |
| thr_mid | 50 | Throttle value when the stick is set to mid-position. Used in the throttle curve calculation. |
| throttle_idle | 15 | The percentage of the throttle range (`max_throttle` - `min_command`) above `min_command` used for minimum / idle throttle. |
| throttle_scale | 1.0 | Throttle scaling factor. `1` means no throttle scaling. `0.5` means throttle scaled down by 50% |
| throttle_tilt_comp_str | 0 | Can be used in ANGLE and HORIZON mode and will automatically boost throttle when banking. Setting is in percentage, 0=disabled. |
| tpa_breakpoint | 1500 | See tpa_rate. |
| tpa_rate | 0 | Throttle PID attenuation reduces influence of P on ROLL and PITCH as throttle increases. For every 1% throttle after the TPA breakpoint, P is reduced by the TPA rate. |
| tri_unarmed_servo | ON | On tricopter mix only, if this is set to ON, servo will always be correcting regardless of armed state. to disable this, set it to OFF. |
| tz_automatic_dst | OFF | Automatically add Daylight Saving Time to the GPS time when needed or simply ignore it. Includes presets for EU and the USA - if you live outside these areas it is suggested to manage DST manually via `tz_offset`. |
| tz_offset | 0 | Time zone offset from UTC, in minutes. This is applied to the GPS time for logging and time-stamping of Blackbox logs |
| vbat_adc_channel | _target default_ | ADC channel to use for battery voltage sensor. Defaults to board VBAT input (if available). 0 = disabled |
| vbat_cell_detect_voltage | 425 | Maximum voltage per cell, used for auto-detecting the number of cells of the battery in 0.01V units. |
| vbat_max_cell_voltage | 420 | Maximum voltage per cell in 0.01V units, default is 4.20V |
| vbat_meter_type | ADC | Vbat voltage source. Possible values: `NONE`, `ADC`, `ESC`. `ESC` required ESC telemetry enebled and running |
| vbat_min_cell_voltage | 330 | Minimum voltage per cell, this triggers battery out alarms, in 0.01V units, default is 330 (3.3V) |
| vbat_scale | _target default_ | Battery voltage calibration value. 1100 = 11:1 voltage divider (10k:1k) x 100. Adjust this slightly if reported pack voltage is different from multimeter reading. You can get current voltage by typing "status" in cli. |
| vbat_warning_cell_voltage | 350 | Warning voltage per cell, this triggers battery-warning alarms, in 0.01V units, default is 350 (3.5V) |
| vtx_band | 4 | Configure the VTX band. Set to zero to use `vtx_freq`. Bands: 1: A, 2: B, 3: E, 4: F, 5: Race. |
| vtx_channel | 1 | Channel to use within the configured `vtx_band`. Valid values are [1, 8]. |
| vtx_halfduplex | ON | Use half duplex UART to communicate with the VTX, using only a TX pin in the FC. |
| vtx_low_power_disarm | OFF | When the craft is disarmed, set the VTX to its lowest power. `ON` will set the power to its minimum value on startup, increase it to `vtx_power` when arming and change it back to its lowest setting after disarming. `UNTIL_FIRST_ARM` will start with minimum power, but once the craft is armed it will increase to `vtx_power` and it will never decrease until the craft is power cycled. |
| vtx_max_power_override | 0 | Some VTXes may report max power incorrectly (i.e. 200mW for a 600mW VTX). Use this to override max supported power. 0 to disable and use whatever VTX reports as its capabilities |
| vtx_pit_mode_chan | 1 |  |
| vtx_power | 1 | VTX RF power level to use. The exact number of mw depends on the VTX hardware. |
| vtx_smartaudio_early_akk_workaround | ON | Enable workaround for early AKK SAudio-enabled VTX bug. |
| yaw_deadband | 5 | These are values (in us) by how much RC input can be different before it's considered valid. For transmitters with jitter on outputs, this value can be increased. Defaults are zero, but can be increased up to 10 or so if rc inputs twitch while idle. |
| yaw_lpf_hz | 0 | Yaw low pass filter cutoff frequency. Should be disabled (set to `0`) on small multirotors (7 inches and below) |
| yaw_rate | 20 | Defines rotation rate on YAW axis that UAV will try to archive on max. stick deflection. Rates are defined in tens of degrees (deca-degrees) per second [rate = dps/10]. That means, rate 20 represents 200dps rotation speed. Default 20 (200dps) is more less equivalent of old Cleanflight/Baseflight rate 0. Max. 180 (1800dps) is what gyro can measure. |

> Note: this table is autogenerated. Do not edit it manually.