const std::string opendriveTypemap =
"<types xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://sumo.dlr.de/xsd/types_file.xsd\">\n"
"    <type id=\"driving\"       priority=\"1\"  speed=\"13.89\" width=\"3.65\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"stop\"          priority=\"1\"  speed=\"13.89\" width=\"3.65\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"restricted\"    priority=\"0\"  speed=\"13.89\" width=\"3.65\" disallow=\"all\"/> <!-- ambiguous semantics. Could mean bus-lane as well as fully-area restricted (but surfaced) lane area (as seen in official examples) -->\n"
"    <type id=\"parking\"       priority=\"1\"  speed=\"1.39\"  width=\"2.50\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"entry\"         priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"exit\"          priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"offRamp\"       priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian bicycle moped rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"onRamp\"        priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian bicycle moped rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"roadWorks\"     priority=\"0\"  speed=\"1.39\"  width=\"3.65\" allow=\"authority\"/>\n"
"    <type id=\"tram\"          priority=\"2\"  speed=\"13.89\" width=\"3.65\" allow=\"tram\"/>\n"
"    <type id=\"rail\"          priority=\"3\"  speed=\"33.33\" width=\"3.65\" allow=\"rail rail_urban rail_electric rail_fast\"/>\n"
"\n"
"    <!-- should be enabled via additional typemaps -->\n"
"    <!--\n"
"    <type id=\"biking\"        priority=\"-1\" speed=\"5.56\"  width=\"1.50\" allow=\"bicycle\"      />\n"
"    <type id=\"sidewalk\"      priority=\"-2\" speed=\"2.78\"  width=\"2.50\" allow=\"pedestrian\"   />\n"
"    -->\n"
"\n"
"    <!-- discarded -->\n"
"    <type id=\"none\"          priority=\"0\"  speed=\"1.39\" width=\"1.0\"   disallow=\"all\"          discard=\"true\"/>\n"
"    <type id=\"shoulder\"      priority=\"0\"  speed=\"1.39\" width=\"1.0\"   disallow=\"all\"          discard=\"true\"/>\n"
"    <type id=\"border\"        priority=\"0\"  speed=\"1.39\" width=\"0.1\"   disallow=\"all\"          discard=\"true\"/>\n"
"    <type id=\"median\"        priority=\"0\"  speed=\"1.39\" width=\"0.1\"   disallow=\"all\"          discard=\"true\"/>\n"
"    <type id=\"special1\"      priority=\"1\"  speed=\"22.22\" width=\"3.65\" allow=\"custom1\"         discard=\"true\"/>\n"
"    <type id=\"special2\"      priority=\"1\"  speed=\"22.22\" width=\"3.65\" allow=\"custom2\"         discard=\"true\"/>\n"
"    <type id=\"special3\"      priority=\"1\"  speed=\"22.22\" width=\"3.65\" allow=\"custom1 custom2\" discard=\"true\"/>\n"
"\n"
"    <!-- deprecated -->\n"
"    <type id=\"mwyEntry\"      priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian bicycle moped rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"mwyExit\"       priority=\"1\"  speed=\"22.22\" width=\"3.65\" disallow=\"pedestrian bicycle moped rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"\n"
"    <!-- not fully implemented -->\n"
"    <type id=\"bidirectional\" priority=\"1\"  speed=\"1.39\"  width=\"3.65\" disallow=\"pedestrian rail rail_urban rail_electric rail_fast tram ship\"/> \n"
"</types>\n"
;

const std::string osmTypemap =
"<types xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"http://sumo.dlr.de/xsd/types_file.xsd\">\n"
"    <type id=\"highway.motorway\"       numLanes=\"2\" speed=\"39.44\" priority=\"14\" oneway=\"true\"  disallow=\"rail rail_urban rail_electric rail_fast tram ship pedestrian bicycle moped\"/>\n"
"    <type id=\"highway.trunk\"          numLanes=\"2\" speed=\"27.78\" priority=\"13\" oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship pedestrian bicycle\"/>\n"
"    <type id=\"highway.primary\"        numLanes=\"2\" speed=\"27.78\" priority=\"12\" oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.secondary\"      numLanes=\"1\" speed=\"27.78\" priority=\"11\" oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.tertiary\"       numLanes=\"1\" speed=\"22.22\" priority=\"10\" oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.motorway_link\"  numLanes=\"1\" speed=\"22.22\" priority=\"9\"  oneway=\"true\"  disallow=\"rail rail_urban rail_electric rail_fast tram ship pedestrian bicycle moped\"/>\n"
"    <type id=\"highway.trunk_link\"     numLanes=\"1\" speed=\"22.22\" priority=\"8\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship pedestrian bicycle\"/>\n"
"    <type id=\"highway.primary_link\"   numLanes=\"1\" speed=\"22.22\" priority=\"7\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.secondary_link\" numLanes=\"1\" speed=\"22.22\" priority=\"6\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.tertiary_link\"  numLanes=\"1\" speed=\"22.22\" priority=\"5\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.unclassified\"   numLanes=\"1\" speed=\"13.89\" priority=\"4\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.residential\"    numLanes=\"1\" speed=\"13.89\" priority=\"3\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.living_street\"  numLanes=\"1\" speed=\"2.78\"  priority=\"2\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.unsurfaced\"     numLanes=\"1\" speed=\"8.33\"  priority=\"1\"  oneway=\"false\" disallow=\"rail rail_urban rail_electric rail_fast tram ship\"/>\n"
"    <type id=\"highway.service\"        numLanes=\"1\" speed=\"5.56\"  priority=\"1\"  oneway=\"false\" allow=\"delivery pedestrian bicycle\"/>\n"
"\n"
"    <!-- everything which serves mainly pedestrians is oneway because all current pedestrian models do not care about direction -->\n"
"    <type id=\"highway.track\"          numLanes=\"1\" speed=\"5.56\"  priority=\"1\"  oneway=\"false\"           allow=\"motorcycle moped pedestrian bicycle\"/>\n"
"    <type id=\"highway.footway\"        numLanes=\"1\" speed=\"2.78\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"    <type id=\"highway.pedestrian\"     numLanes=\"1\" speed=\"2.78\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"    <type id=\"highway.path\"           numLanes=\"1\" speed=\"2.78\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian bicycle\"/>\n"
"    <type id=\"highway.bridleway\"      numLanes=\"1\" speed=\"2.78\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"    <type id=\"highway.cycleway\"       numLanes=\"1\" speed=\"8.33\"  priority=\"1\"  oneway=\"false\" width=\"1\" allow=\"bicycle\"/>\n"
"    <type id=\"highway.step\"           numLanes=\"1\" speed=\"1.39\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"    <type id=\"highway.steps\"          numLanes=\"1\" speed=\"1.39\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"    <type id=\"highway.stairs\"         numLanes=\"1\" speed=\"1.39\"  priority=\"1\"  oneway=\"true\"  width=\"2\" allow=\"pedestrian\"/>\n"
"\n"
"    <type id=\"highway.bus_guideway\"   numLanes=\"1\" speed=\"27.78\" priority=\"1\"  oneway=\"true\"  allow=\"bus\"/>\n"
"    <type id=\"highway.raceway\"        numLanes=\"2\" speed=\"83.33\" priority=\"15\" oneway=\"false\" allow=\"vip\"/>\n"
"    <type id=\"highway.ford\"           numLanes=\"1\" speed=\"2.78\"  priority=\"1\"  oneway=\"false\" allow=\"army\"/>\n"
"\n"
"    <type id=\"railway.preserved\"      numLanes=\"1\" speed=\"27.78\" priority=\"16\" oneway=\"true\"  allow=\"rail\"/>\n"
"    <type id=\"railway.tram\"           numLanes=\"1\" speed=\"13.89\" priority=\"17\" oneway=\"true\"  allow=\"tram\"/>\n"
"    <type id=\"railway.subway\"         numLanes=\"1\" speed=\"27.78\" priority=\"18\" oneway=\"true\"  allow=\"rail_urban\"/>\n"
"    <type id=\"railway.light_rail\"     numLanes=\"1\" speed=\"27.78\" priority=\"19\" oneway=\"true\"  allow=\"rail_urban\"/>\n"
"    <type id=\"railway.rail\"           numLanes=\"1\" speed=\"44.44\" priority=\"20\" oneway=\"true\"  allow=\"rail\"/>\n"
"    <type id=\"railway.highspeed\"      numLanes=\"1\" speed=\"69.44\" priority=\"21\" oneway=\"true\"  allow=\"rail_fast\"/>\n"
"\n"
"</types>\n"
;

const std::string types_file = 
"<!DOCTYPE xsd:schema [\n"
"    <!ENTITY FloatPattern \"(\\-)?(\\d+.?|(\\d*.\\d+))\">\n"
"    <!ENTITY PositionPattern \"(\\-)?(\\d+.?|(\\d*.\\d+)),(\\-)?(\\d+.?|(\\d*.\\d+))(,(\\-)?(\\d+.?|(\\d*.\\d+)))?\">\n"
"    <!ENTITY FloatPattern01 \"(0|(0?.(\\d+))|(1|1.0*))\">\n"
"    <!ENTITY IntPattern255 \"(\\d|[1-9]\\d|1\\d\\d|2[0-4]\\d|25[0-5])\">\n"
"]>\n"
"<xsd:schema elementFormDefault=\"qualified\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">\n"
"\n"
"    <xsd:simpleType name=\"positiveFloatType\">\n"
"        <xsd:restriction base=\"xsd:float\">\n"
"            <xsd:minExclusive value=\"0\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"nonNegativeFloatType\">\n"
"        <xsd:restriction base=\"xsd:float\">\n"
"            <xsd:minInclusive value=\"0\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"nonNegativeFloatTypeWithErrorValue\">\n"
"        <xsd:union memberTypes=\"nonNegativeFloatType\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:float\">\n"
"                    <xsd:minInclusive value=\"-1\"/>\n"
"                    <xsd:maxInclusive value=\"-1\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType> \n"
"        </xsd:union>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"nonNegativeDistributionType\">\n"
"        <xsd:union memberTypes=\"nonNegativeFloatType\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"(norm|normc)\\(&FloatPattern;,&FloatPattern;(,&FloatPattern;(,&FloatPattern;)?)?\\)\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType> \n"
"        </xsd:union>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"positiveIntType\">\n"
"        <xsd:restriction base=\"xsd:int\">\n"
"            <xsd:minExclusive value=\"0\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"nonNegativeIntType\">\n"
"        <xsd:restriction base=\"xsd:int\">\n"
"            <xsd:minInclusive value=\"0\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"boolType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:enumeration value=\"true\"/>\n"
"            <xsd:enumeration value=\"false\"/>\n"
"            <xsd:enumeration value=\"True\"/>\n"
"            <xsd:enumeration value=\"False\"/>\n"
"            <xsd:enumeration value=\"yes\"/>\n"
"            <xsd:enumeration value=\"no\"/>\n"
"            <xsd:enumeration value=\"on\"/>\n"
"            <xsd:enumeration value=\"off\"/>\n"
"            <xsd:enumeration value=\"1\"/>\n"
"            <xsd:enumeration value=\"0\"/>\n"
"            <xsd:enumeration value=\"x\"/>\n"
"            <xsd:enumeration value=\"-\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType> \n"
"\n"
"    <xsd:simpleType name=\"colorType\">\n"
"        <xsd:union>\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern01;,&FloatPattern01;,&FloatPattern01;(,&FloatPattern01;)?\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&IntPattern255;,&IntPattern255;,&IntPattern255;(,&IntPattern255;)?\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:enumeration value=\"red\"/>\n"
"                    <xsd:enumeration value=\"green\"/>\n"
"                    <xsd:enumeration value=\"blue\"/>\n"
"                    <xsd:enumeration value=\"yellow\"/>\n"
"                    <xsd:enumeration value=\"cyan\"/>\n"
"                    <xsd:enumeration value=\"magenta\"/>\n"
"                    <xsd:enumeration value=\"orange\"/>\n"
"                    <xsd:enumeration value=\"white\"/>\n"
"                    <xsd:enumeration value=\"black\"/>\n"
"                    <xsd:enumeration value=\"grey\"/>\n"
"                    <xsd:enumeration value=\"gray\"/>\n"
"                    <xsd:enumeration value=\"invisible\"/>\n"
"                    <xsd:enumeration value=\"random\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"#[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:union>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"positionType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:pattern\n"
"                value=\"&PositionPattern;\">\n"
"            </xsd:pattern>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"shapeType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:pattern\n"
"                value=\"(&PositionPattern;(\\s&PositionPattern;)*)?\">\n"
"            </xsd:pattern>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"shapeTypeTwo\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:pattern\n"
"                value=\"&PositionPattern;\\s&PositionPattern;(\\s&PositionPattern;)*\">\n"
"            </xsd:pattern>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:complexType name=\"locationType\">\n"
"        <xsd:attribute name=\"netOffset\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern;,&FloatPattern;(,&FloatPattern;)?\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"convBoundary\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern;,&FloatPattern;,&FloatPattern;,&FloatPattern;\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"origBoundary\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern;,&FloatPattern;,&FloatPattern;,&FloatPattern;\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"projParameter\" type=\"xsd:string\" use=\"required\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"boolOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"boolType\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"intOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:int\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"floatOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:float\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"timeOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:float\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"strOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"strArrayOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"fileOptionType\">\n"
"        <xsd:attribute name=\"value\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"intArrayOptionType\">\n"
"        <xsd:attribute name=\"value\" use=\"required\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"(\\-)?(\\d+)(,(\\-)?(\\d+))*\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"synonymes\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"help\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"tlLogicType\">\n"
"        <xsd:choice minOccurs=\"0\" maxOccurs=\"unbounded\">\n"
"            <xsd:element name=\"phase\" type=\"phaseType\"/>\n"
"            <xsd:element name=\"param\" type=\"paramType\"/>\n"
"        </xsd:choice>\n"
"        <xsd:attribute name=\"id\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"type\" type=\"tlTypeType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"programID\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"offset\" type=\"xsd:float\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:simpleType name=\"tlTypeType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:enumeration value=\"actuated\"/>\n"
"            <xsd:enumeration value=\"delay_based\"/>\n"
"            <xsd:enumeration value=\"static\"/>\n"
"            <!--xsd:enumeration value=\"rail\"/  only for internal use -->\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:complexType name=\"phaseType\">\n"
"        <xsd:attribute name=\"duration\" type=\"nonNegativeFloatType\" use=\"required\"/>\n"
"        <xsd:attribute name=\"minDur\" type=\"nonNegativeFloatType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"maxDur\" type=\"nonNegativeFloatType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"state\" use=\"required\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"[ruyYgGoOs]+\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"next\" type=\"nonNegativeIntType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"name\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"paramType\">\n"
"        <xsd:attribute name=\"key\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"value\" type=\"xsd:string\" use=\"required\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"typeType\">\n"
"        <xsd:choice minOccurs=\"0\" maxOccurs=\"unbounded\">\n"
"            <xsd:element name=\"restriction\" type=\"restrictionType\"/>\n"
"        </xsd:choice>\n"
"        <xsd:attribute name=\"id\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"allow\" type=\"xsd:string\"/>\n"
"        <xsd:attribute name=\"disallow\" type=\"xsd:string\"/>\n"
"        <xsd:attribute name=\"priority\" type=\"xsd:int\"/>\n"
"        <xsd:attribute name=\"numLanes\" type=\"xsd:int\"/>\n"
"        <xsd:attribute name=\"speed\" type=\"xsd:float\"/>\n"
"        <xsd:attribute name=\"discard\" type=\"boolType\"/>\n"
"        <xsd:attribute name=\"oneway\" type=\"boolType\"/>\n"
"        <xsd:attribute name=\"width\" type=\"xsd:float\"/>\n"
"        <xsd:attribute name=\"widthResolution\" type=\"nonNegativeFloatType\"/>\n"
"        <xsd:attribute name=\"maxWidth\" type=\"nonNegativeFloatType\"/>\n"
"        <xsd:attribute name=\"minWidth\" type=\"nonNegativeFloatType\"/>\n"
"        <xsd:attribute name=\"sidewalkWidth\" type=\"xsd:float\"/>\n"
"        <xsd:attribute name=\"bikeLaneWidth\" type=\"xsd:float\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:complexType name=\"restrictionType\">\n"
"        <xsd:attribute name=\"vClass\" type=\"xsd:string\" use=\"required\"/>\n"
"        <xsd:attribute name=\"speed\" type=\"xsd:float\" use=\"required\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:simpleType name=\"nodeTypeType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:enumeration value=\"traffic_light\"/>\n"
"            <xsd:enumeration value=\"right_before_left\"/>\n"
"            <xsd:enumeration value=\"priority\"/>\n"
"            <xsd:enumeration value=\"dead_end\"/>\n"
"            <xsd:enumeration value=\"unregulated\"/>\n"
"            <xsd:enumeration value=\"traffic_light_unregulated\"/>\n"
"            <xsd:enumeration value=\"rail_signal\"/>\n"
"            <xsd:enumeration value=\"allway_stop\"/>\n"
"            <xsd:enumeration value=\"priority_stop\"/>\n"
"            <xsd:enumeration value=\"zipper\"/>\n"
"            <xsd:enumeration value=\"rail_crossing\"/>\n"
"            <xsd:enumeration value=\"traffic_light_right_on_red\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:complexType name=\"splitType\">\n"
"        <xsd:attribute name=\"lanes\" use=\"optional\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"\\d+(([,;]|\\s)\\d+)*\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"        <xsd:attribute name=\"pos\" type=\"xsd:float\" use=\"required\"/>\n"
"        <xsd:attribute name=\"speed\" type=\"positiveFloatType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"type\" type=\"nodeTypeType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"tl\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"tlType\" type=\"tlTypeType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"shape\" type=\"shapeType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"radius\" type=\"nonNegativeFloatType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"keepClear\" type=\"boolType\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"id\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"idBefore\" type=\"xsd:string\" use=\"optional\"/>\n"
"        <xsd:attribute name=\"idAfter\" type=\"xsd:string\" use=\"optional\"/>\n"
"    </xsd:complexType>\n"
"\n"
"    <xsd:simpleType name=\"timeType\">\n"
"        <xsd:union memberTypes=\"nonNegativeFloatType\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern;:&FloatPattern;:&FloatPattern;(:&FloatPattern;)?\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType> \n"
"        </xsd:union>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"timeTypeWithErrorValue\">\n"
"        <xsd:union memberTypes=\"nonNegativeFloatTypeWithErrorValue\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"&FloatPattern;:&FloatPattern;:&FloatPattern;(:&FloatPattern;)?\"/>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:union>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"idType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:pattern value=\"[^ \\t\\n\\r|\\\\;,']+\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    <xsd:simpleType name=\"detectorIdType\">\n"
"        <xsd:restriction base=\"xsd:string\">\n"
"            <xsd:pattern value=\"[^\\t\\n\\r|\\\\;,']+\"/>\n"
"        </xsd:restriction>\n"
"    </xsd:simpleType>\n"
"\n"
"    \n"
"    <xsd:element name=\"types\" type=\"typesType\">\n"
"        <xsd:key name=\"typeKey\">\n"
"            <xsd:selector xpath=\"type\"/>\n"
"            <xsd:field xpath=\"@id\"/>\n"
"        </xsd:key>\n"
"    </xsd:element>\n"
"\n"
"    <xsd:complexType name=\"typesType\">\n"
"        <xsd:sequence>\n"
"            <xsd:element name=\"type\" type=\"typeType\" minOccurs=\"0\" maxOccurs=\"unbounded\"/>\n"
"        </xsd:sequence>\n"
"        <xsd:attribute name=\"version\" use=\"optional\">\n"
"            <xsd:simpleType>\n"
"                <xsd:restriction base=\"xsd:string\">\n"
"                    <xsd:pattern value=\"\\d+.\\d+\"></xsd:pattern>\n"
"                </xsd:restriction>\n"
"            </xsd:simpleType>\n"
"        </xsd:attribute>\n"
"    </xsd:complexType>\n"
"\n"
"</xsd:schema>\n"
;