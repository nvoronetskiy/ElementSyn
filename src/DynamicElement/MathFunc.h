
#ifndef MATHFUNC_H
#define MATHFUNC_H

#include "main.h"
#include "vec.h"

namespace machy_math
{
	Vec4f QuatConjugate(const Vec4f& q0);

	Vec3f QuatMultiplyVec(const Vec4f& q0, const Vec3f& v0);

	Vec4f QuatSlerp(Vec4f q1, Vec4f q2, Flt wt);

	void SetMatrixFromQuat(Flt* ptrMat, Vec4f quat);

	void SetQuatFromMatrix(Flt* ptrMat, Vec4f& quat);

	Vec3f GetTriFaceNormal(const Vec3f& v1, const Vec3f& v2, const Vec3f& v3);

	Flt GetVertexTriDist(const Vec3f& v1, const Vec3f& v2, const Vec3f& v3, const Vec3f& p0, const Vec3f& direc);

	Flt GetVertexTriDistNew(const Vec3f& v1, const Vec3f& v2, const Vec3f& v3, const Vec3f& p0, const Vec3f& direc);

	Flt GetTriPairDist(const Vec3f& v11, const Vec3f& v12, const Vec3f& v13, const Vec3f& v21, const Vec3f& v22, const Vec3f& v23, const Vec3f& direc);

	Flt GetTriPairDistNew(const Vec3f& v11, const Vec3f& v12, const Vec3f& v13, const Vec3f& v21, const Vec3f& v22, const Vec3f& v23, const Vec3f& direc);
}

#endif MATHFUNC_H