#ifndef JSONINFO_H
#define JSONINFO_H
class JsonInfo
{
public:
    QVector<QString> m_Songname_original; //歌曲名
    QVector<QString> m_Singername;        //歌手
    QVector<QString> m_Album_name;        //专辑
    QVector<int> m_Duration;              //时间
    QVector<QString> m_Hash;              //hash
    QVector<QString> m_Album_id;                //album_id
};
#endif // JSONINFO_H
